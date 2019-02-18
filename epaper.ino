#include <GxEPD.h>
#include <GxGDEW0213I5F/GxGDEW0213I5F.h>
#include <Fonts/Ubuntu_B7pt7b.h>

#include <GxIO/GxIO_SPI/GxIO_SPI.h>
#include <GxIO/GxIO.h>

#define CS_PIN           15
#define RST_PIN          5
#define DC_PIN           4
#define BUSY_PIN         16
#define GPIO_PIN_SET   1
#define GPIO_PIN_RESET 0

GxIO_Class io(SPI, CS_PIN, DC_PIN, RST_PIN);
GxEPD_Class display(io, GPIO_PIN_RESET, BUSY_PIN);

const float VOLTAGE_DIVIDER_RATIO = 5.7;

void setupEpaper(uint32_t t) {
  Serial.println("Setting up the e-paper display...");
  Serial.println("init");
  display.init(115200);
  display.setRotation(3);
  setFont();
  drawBatteryMeter(readBatteryLevel());
  display.print("Unix timestamp: ");
  display.println(t);
  display.update();
}


void setFont()
{
  const char* name = "Ubuntu_B7pt7b.h";
  const GFXfont* f = &Ubuntu_B7pt7b;
  //display.fillScreen(GxEPD_WHITE);
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

void drawBatteryMeter(uint8_t percent) {
  int h = round(display.height() * percent / 100);
  display.fillRect(display.width() - 1, display.height() - h , 1, h, GxEPD_BLACK);
  display.print("Battery: ");
  display.print(percent);
  display.println("%");
}


static inline uint8_t sigmoidal(uint16_t voltage, uint16_t minVoltage, uint16_t maxVoltage) {
  uint8_t result = 105 - (105 / (1 + pow(1.724 * (voltage - minVoltage) / (maxVoltage - minVoltage), 5.5)));
  return result >= 100 ? 100 : result;
}
