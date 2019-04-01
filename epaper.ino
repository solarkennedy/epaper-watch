#include <GxEPD2_BW.h>
#include "Ubuntu_B7pt7b.h"

GxEPD2_BW<GxEPD2_213_flex, GxEPD2_213_flex::HEIGHT> display(GxEPD2_213_flex(/*CS=15*/ SS, /*DC=4*/ 4, /*RST=5*/ 5, /*BUSY=16*/ 16)); // GDEW0213I5F

void setupEpaper() {
  initEpaper();
  displayBatteryMeter(readBatteryLevel());
  displayQuote();
  displayAttribution();
  while (display.nextPage());
}

void displayQuote() {
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
        display.setTextColor(GxEPD_WHITE, GxEPD_BLACK);
      } else {
        bold = false;
        display.setTextColor(GxEPD_BLACK, GxEPD_WHITE);
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
    } else if (tby > display.height() ) {
      Serial.println("We've overflowed the screen. Exiting early");
      return;
    }

    if (bold) {
      display.getTextBounds(w, x, y, &tbx, &tby, &tbw, &tbh);
      display.fillRect(tbx-1, tby-1, tbw+2, tbh+2, GxEPD_BLACK);
    }
    display.print(w);
    Serial.print(w);
    display.print(" ");
    Serial.print(" ");

  }
}

void initEpaper() {
  Serial.println("Setting up the e-paper display...");
  display.init(0);
  display.setRotation(3);
  setFont();
  display.fillScreen(GxEPD_WHITE);
}

void displayAttribution() {
  int16_t tbx, tby; uint16_t tbw, tbh;
  display.getTextBounds(attribution, 0, 0, &tbx, &tby, &tbw, &tbh);
  uint16_t x = (display.width() - tbw - 6);
  uint16_t y = (display.height() - tbh + 6);
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
  Serial.print("Battery Percent: ");
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


static inline uint8_t sigmoidal(uint16_t voltage, uint16_t minVoltage, uint16_t maxVoltage) {
  uint8_t result = 105 - (105 / (1 + pow(1.724 * (voltage - minVoltage) / (maxVoltage - minVoltage), 5.5)));
  return result >= 100 ? 100 : result;
}
