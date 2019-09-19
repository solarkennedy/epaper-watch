#ifdef WATCH
#include <GxEPD2_BW.h>
GxEPD2_BW<GxEPD2_213_flex, GxEPD2_213_flex::HEIGHT> display(GxEPD2_213_flex(/*CS=15*/ SS, /*DC=4*/ 4, /*RST=5*/ 5, /*BUSY=16*/ 16)); // GDEW0213I5F
#else
#include <GxEPD2_3C.h>
GxEPD2_3C<GxEPD2_290c, GxEPD2_290c::HEIGHT> display(GxEPD2_290c(/*CS=D8*/ SS, /*DC=D3*/ 4, /*RST=D4*/ 5, /*BUSY=D2*/ 16));
#endif

#include "Ubuntu_B7pt7b.h"


void setupEpaper() {
  Serial.println(F("setupEpaper..."));
  initEpaper();
  display.firstPage();
  do
  {
    Serial.println(F("nextPage loop..."));
#ifdef WATCH
    //displayBatteryMeter(readBatteryLevel());
#endif
    displayQuote();
    displayAttribution();
  }
  while (display.nextPage());
#ifdef WATCH
  display.hibernate();
#endif
}

void displayQuote() {
  Serial.println(F("displayQuote..."));
  int str_len = quote.length() + 1;
  char char_array[str_len];
  quote.toCharArray(char_array, str_len);
  char *p = char_array;
  char *w;
  int x;
  int y;
  int16_t tbx, tby; uint16_t tbw, tbh;
  bool bold = false;

  while ((w = strtok_r(p, " ", &p)) != NULL)
  {
    if (w[0] == '*') {
      if (bold == false) {
        bold = true;
#ifdef WATCH
        display.setTextColor(GxEPD_BLACK, GxEPD_WHITE);
#else
        display.setTextColor(GxEPD_RED, GxEPD_WHITE);
#endif
      } else {
        bold = false;
#ifdef WATCH
        display.setTextColor(GxEPD_BLACK, GxEPD_WHITE);
#else
        display.setTextColor(GxEPD_BLACK, GxEPD_WHITE);
#endif
      }
      continue;
    }
    // If we are going to overflow the line we need to wrap
    x = display.getCursorX();
    y = display.getCursorY();
    display.getTextBounds(w, x, y, &tbx, &tby, &tbw, &tbh);

    if (tbx == 1 && x != 0) {
      // If we are going to overflow the line we need to wrap
      display.println();
      Serial.println();
    } else if (y > display.height() ) {
      Serial.println("We've overflowed the screen!");
      display.println();
      Serial.println();
    }

    display.print(w);
    Serial.print(w);
    display.print(" ");
    Serial.print(" ");
  }
}

void initEpaper() {
  Serial.println(F("initEpaper..."));
  display.init(0, true);
  display.setRotation(3);
  setFont();
  display.fillScreen(GxEPD_WHITE);
}

void displayAttribution() {
  Serial.println(F("displayAttribution..."));
  int16_t tbx, tby; uint16_t tbw, tbh;
  display.getTextBounds(attribution, 0, 0, &tbx, &tby, &tbw, &tbh);
  uint16_t x = (display.width() - tbw - 6);
  uint16_t y = (display.height() - tbh + 10);
  display.setCursor(x, y);
  display.println(attribution);
}

void setFont()
{
  const GFXfont* f = &Ubuntu_B7pt7b;
  display.setTextColor(GxEPD_BLACK, GxEPD_WHITE);
  display.setFont(f);
  display.setCursor(0, 12);
}

uint8_t readBatteryLevel() {
  float voltage = readBatteryVoltage();
  uint8_t percent = sigmoidal(voltage, 3.2, 4.1);
  Serial.print(F("Battery Percent: "));
  Serial.print(percent);
  Serial.print(" (");
  Serial.print(voltage);
  Serial.println(" volts)");
  return percent;
}

float readBatteryVoltage() {
  float raw = rawBatteryAnalogRead();
  Serial.print("Raw analog read is: ");
  Serial.println(raw);
  const float ref = 1.0;
  const float adjust = 0.875609756; // shrug?
  float vout = (raw * ref * adjust) / 1023.0;
  Serial.print("Voltage at the A0 pin: ");
  Serial.print(vout);
  Serial.println(" volts");
  float R1 = 47000.0;
  float R2 = 10000.0;
  float vin = vout / (R2 / (R1 + R2));
  Serial.print("Computed voltage read is: ");
  Serial.print(vin);
  Serial.println(" volts");
  return vin;
}

float rawBatteryAnalogRead() {
  return analogRead(A0);
}

void displayBatteryMeter(uint8_t percent) {
  int h = round(display.height() * percent / 100);
  display.fillRect(display.width() - 1, display.height() - h , 1, h, GxEPD_BLACK);
}


static inline uint8_t sigmoidal(float voltage, float minVoltage, float maxVoltage) {
  Serial.println(voltage);
  Serial.println(minVoltage);
  Serial.println(maxVoltage);
  uint8_t result = 105 - (105 / (1 + pow(1.724 * (voltage - minVoltage) / (maxVoltage - minVoltage), 5.5)));
  Serial.println(result);
  return result >= 100 ? 100 : result;
}
