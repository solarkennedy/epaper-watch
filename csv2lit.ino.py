#!/usr/bin/env python3.6
import csv
import datetime as dt
import time
from collections import defaultdict
from dateutil import rrule
from datetime import timedelta


def print_header():
    print("void print_minute(int minute) {") 
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
    return strip_bad(escape(f"{row['quote']} - {row['author']}, {row['book']}"))


def strip_bad(s):
    return s.replace('\n', ' ')


def print_code_for_a_single_quote(row, indent):
    full_quote = row_to_full_quote(row)
    print(f'{" "*indent}Serial.println("{full_quote}");')
    print(f'{" "*indent}paint.Paint_DrawString_EN(0, 0, "{full_quote}", &Font12, WHITE, BLACK);')


def escape(s, quote='"'):
    return s.replace(quote, f"\{quote}")

def print_code_for_a_minute(rows, minute_str, minute_dt):
    minute_number = number_of_minutes_in(minute_dt)
    print(f"    // Codegen for {minute_str} for {len(rows)} quotations:")
    print(f"    case {minute_number}:")
    if len(rows) == 0:
        print(f'      Serial.println("No quotes for {minute_str}");')
        print(f"      return;")
    elif len(rows) == 1:
        print(f'      Serial.println("Only one option for {minute_str}:");')
        print_code_for_a_single_quote(rows[0], indent=4)
        print(f"      return;")
    else:
        print(f'      Serial.println("len(rows) options for {minute_str}. Picking one:");')
        print(f'      option = random(0, {len(rows)});')
        print('      switch (option) {')
        counter = 0
        for row in rows:
            print(f"        case {counter}:")
            print_code_for_a_single_quote(rows[counter], indent=10)
            print(f"          return;")
            counter = counter + 1
        print('      } // end switch (option)')
    print("")


def print_code_for_each_minute(buckets):
    dstart = dt.datetime(1, 1, 1)
    # I don't really like "military time", but 12:HH is OK.
    # That means I want to go from 00:00 -> 12:59
    dend = dstart + timedelta(hours=12, minutes=59)
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
    with open('litclock_annotated.csv') as f:
        csv = csv.DictReader(f, delimiter='|')
        print_code(csv)
    print_footer()
