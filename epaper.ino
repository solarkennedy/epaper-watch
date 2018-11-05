#include <GxEPD.h>
#include <GxGDEW0213I5F/GxGDEW0213I5F.h>
#include GxEPD_BitmapExamples
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


void epaperInit() {
  Serial.println("Setting up the e-paper display...");
  display.init(115200);
  display.setRotation(3);
  showFont();
  drawBatteryMeter(50);
  display.fillRect(0, 0, 8, 8, GxEPD_BLACK);
  display.fillRect(display.width() - 18, 0, 16, 16, GxEPD_BLACK);
  display.fillRect(display.width() - 25, display.height() - 25, 24, 24, GxEPD_BLACK);
  display.fillRect(0, display.height() - 33, 32, 32, GxEPD_BLACK);
  display.update();
}

void showFont()
{
  const char* name = "Ubuntu_B7pt7b.h";
  const GFXfont* f = &Ubuntu_B7pt7b;
  //display.fillScreen(GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK, GxEPD_WHITE);
  display.setFont(f);
  display.setCursor(0, 12);

  display.println(name);
  display.println(" !\"#$%&'()*+,-./");
  display.println("0123456789:;<=>?");
  display.println("@ABCDEFGHIJKLMNO");
  display.println("PQRSTUVWXYZ[\\]^_");
  display.println("`abcdefghijklmno");
  display.println("pqrstuvwxyz{|}~ ");

}

void drawBatteryMeter(int percent) {
  int h = round(display.height() * percent / 100);
  display.fillRect(display.width() - 1, display.height() - h , 1, h, GxEPD_BLACK);
  //display.updateWindow(display.width() - 1, 0 , display.width(), display.height());
}
