#include <GxEPD2_BW.h>
#include "Ubuntu_B7pt7b.h"

GxEPD2_BW<GxEPD2_213_flex, GxEPD2_213_flex::HEIGHT> display(GxEPD2_213_flex(/*CS=15*/ SS, /*DC=4*/ 4, /*RST=5*/ 5, /*BUSY=16*/ 16)); // GDEW0213I5F


const float VOLTAGE_DIVIDER_RATIO = 5.7;

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


  while ((w = strtok_r(p, " ", &p)) != NULL)
  {
    // If we are going to overflow the line we need to wrap
    x = display.getCursorX();
    y = display.getCursorY();
    display.getTextBounds(w, x, y, &tbx, &tby, &tbw, &tbh);
    if (tbx == 1 && x != 1) {
          // If we are going to overflow the line we need to wrap
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
  float voltage = analogRead(A0) * VOLTAGE_DIVIDER_RATIO / 1024 * 0.980716253;
  uint8_t percent = sigmoidal(voltage, 0, 4.2);
  Serial.print("Battery Percent: ");
  Serial.print(percent);
  Serial.print(" (");
  Serial.print(voltage);
  Serial.println(" volts)");
  return percent;
}

void displayBatteryMeter(uint8_t percent) {
  int h = round(display.height() * percent / 100);
  display.fillRect(display.width() - 1, display.height() - h , 1, h, GxEPD_BLACK);
}


static inline uint8_t sigmoidal(uint16_t voltage, uint16_t minVoltage, uint16_t maxVoltage) {
  uint8_t result = 105 - (105 / (1 + pow(1.724 * (voltage - minVoltage) / (maxVoltage - minVoltage), 5.5)));
  return result >= 100 ? 100 : result;
}
