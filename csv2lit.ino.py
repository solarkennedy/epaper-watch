#!/usr/bin/env python3
import csv
import datetime as dt
import time
from collections import defaultdict
from dateutil import rrule
from datetime import timedelta


DISPLAY_WIDTH = 212
DISPLAY_HEIGHT = 101
CHAR_WIDTH = 7
MARGIN = 5

def print_header():
    print("void setQuoteForMinute(int minute) {") 
    print("  long option = 0;")
    print("  switch (minute) {")
    print("")


def print_footer():
    print("  } // end switch (minute)")
    print("")
    print("} // end print_minute()")


def number_of_minutes_in(dt):
    return dt.minute + dt.hour*60


def row_to_full_quote(row):
    return strip_bad(escape(f"{row['time']} - {row['quote']} - {row['author'].strip()}, {row['book']}"))


def strip_bad(s):
    return s.replace('\n', ' ')


def print_words_so_far(words_so_far, cursor, font, fg, bg):
    words = ' '.join(words_so_far)
    assert cursor[0] + len(words) + MARGIN < DISPLAY_WIDTH, f"too long: {words}, {len(words)*7}"
    return f'      // display.setCursor({cursor[0]}, {cursor[1]});\n      // display.println("{words}");'
    #return f'paint.Paint_DrawString_EN({cursor[0]}, {cursor[1]}, "{' '.join(words_so_far)}", &Font{font}, {fg}, {bg});'


def quote_to_print_lines(row, margin=5, font=12):
    char_width=7
    char_v_baseline = 3
    code = []
    words_so_far = []
    cursor= (margin, margin)
    quote = strip_bad(escape(row['quote'])).replace(row['time_string'], "TIMESTRING")
    timestring_cursor = None
    for word in quote.split():
        if "TIMESTRING" in word:
            print(f"// DEBUG: Wrorking on the timestring")
            if cursor[0] + len(row['time_string'])*char_width + 1 < DISPLAY_WIDTH - margin:
                timestring_cursor = cursor
                cursor = (cursor[0] + len(row['time_string'])*char_width + 1, cursor[1])
            else:
                # We won't fit on this row, let's flush the buffer to make room
                # and mark where the cursor would go next
                drawing_cursor = (margin, cursor[1])
                code.append(print_words_so_far(words_so_far, drawing_cursor, font, "WHITE", "BLACK"))
                words_so_far = []
                cursor = (margin, cursor[1] + font)
                timestring_cursor = cursor
                cursor = (cursor[0] + len(row['time_string'])*char_width, cursor[1])
            

        if cursor[0] + len(word)*char_width + 1 + margin < DISPLAY_WIDTH:
            # If we can fit, let's just append the word
            words_so_far.append(word)
            cursor = (cursor[0] + len(word)*char_width + 1, cursor[1])
            assert cursor[0] + margin <= DISPLAY_WIDTH
        else:
            # We don't fit, so let's flush
            drawing_cursor = (margin, cursor[1])
            code.append(print_words_so_far(words_so_far, drawing_cursor, font, "WHITE", "BLACK"))
            words_so_far = [word]
            cursor = (margin + len(word) + 1, cursor[1] + font)
            assert cursor[1] + margin <= DISPLAY_HEIGHT, f"too long: {quote}, {cursor[1]}"

    # Now we print the time string, which is highlighted
    assert timestring_cursor, quote
    code.append(print_words_so_far([row['time_string']], timestring_cursor, font, "BLACK", "WHITE"))

    # Now we print the attribution, which is right justified and properly formatted
    attribution_string = format_att_string(row, margin, char_width)
    x = DISPLAY_WIDTH - margin - len(attribution_string)*char_width
    assert x > 0, f"att string too long: '{attribution_string}', needs an x of {x}"
    y =  DISPLAY_WIDTH - margin - font - char_v_baseline
    cursor = (x, y)
    code.append(print_words_so_far([attribution_string], cursor, font, "WHITE", "BLACK"))

    return code


def format_att_string(row, margin=MARGIN, char_width=7):
    if row['author'].strip() == "":
        return f"- {row['book']}"
    elif row['book'].strip() == "":
        return f"- {row['author']}"
    else:
        att = f"- {row['author'].strip()}, {row['book']}"
        x = DISPLAY_WIDTH - margin - len(att)*char_width
        if x < 0:
            att = f"- {row['book'].strip()}"
            x = DISPLAY_WIDTH - margin - len(att)*char_width
            if x > 0:
                return att
            else:
                att = f"- {row['author'].strip()}"
                return att
        else:
            return att


def print_code_for_a_single_quote(row, indent):
    full_quote = row_to_full_quote(row)
    print(f'{" "*indent}Serial.println(F("{full_quote}"));')
    for line in quote_to_print_lines(row):
        print(f'{" "*indent}{line}')


def escape(s, quote='"'):
    return s.replace(quote, f"\{quote}")


def boldit(quote, row):
    timestring = row['time_string']
    if timestring not in quote:
        raise Exception(f"No '{timestring}' in {quote}")
    return quote.replace(timestring, f"* {timestring} *", 1)


def print_code_for_a_minute(rows, minute_str, minute_dt):
    minute_number = number_of_minutes_in(minute_dt)
    print(f"    // Codegen for {minute_str} for {len(rows)} quotations:")
    print(f"    case {minute_number}:")
    if len(rows) == 0:
        print(f'      // No quotes for {minute_str}')
        print('        quote = "";')
        print('        attribution = "";')
        print(f'      return;')
    elif len(rows) == 1:
        print(f'      // Only one option for {minute_str}:"')
        quote = strip_bad(escape(rows[0]['quote']))
        if len(quote) >= 180:
            raise Exception(f"{minute_number} Quote too long {len(quote)} for screen: {quote}")
        quote = boldit(quote, rows[0])
        print(f'      quote = F("{quote}");')
        print(f'      attribution = F("{format_att_string(rows[0])}");')
        # print_code_for_a_single_quote(rows[0], indent=4)
        print(f"      return;")
    else:
        print(f'      option = random(0, {len(rows)});')
        print(f'      // {len(rows)} options for {minute_str}')
        print('      switch (option) {')
        counter = 0
        for row in rows:
            print(f"        case {counter}:")
            #print_code_for_a_single_quote(rows[counter], indent=10)
            quote = strip_bad(escape(rows[counter]['quote']))
            if len(quote) >= 180:
                raise Exception(f"{minute_number} Quote too long {len(quote)} for screen: {quote}")
            quote = boldit(quote, rows[counter])
            print(f'      quote = F("{quote}");')
            print(f'      attribution = F("{format_att_string(row)}");')
            print(f'      return;')
            counter = counter + 1
        print('      } // end switch (option)')
    print("")


def print_code_for_each_minute(buckets):
    dstart = dt.datetime(1, 1, 1)
    # I don't really like "military time", but 12:HH is OK.
    # That means I want to go from 00:00 -> 12:59
    dend = dstart + timedelta(hours=23, minutes=59)
    for minute_dt in rrule.rrule(rrule.MINUTELY, dtstart=dstart, until=dend):
        minute_str = minute_dt.strftime("%H:%M")
        print_code_for_a_minute(buckets[minute_str], minute_str, minute_dt)


def print_code(csv):
    buckets = defaultdict(list)
    for row in csv:
        buckets[row['time']].append(row)
    print_code_for_each_minute(buckets)


if __name__ == '__main__':
    print_header()
    with open('litclock_expanded_meridiem.csv') as f:
        csv = csv.DictReader(f, delimiter='|')
        print_code(csv)
    print_footer()
