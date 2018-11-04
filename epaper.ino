#include <GxEPD.h>
#include <GxGDEW0213I5F/GxGDEW0213I5F.h>
#include GxEPD_BitmapExamples
#include <Fonts/FreeSans9pt7b.h>

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
  delay(5000);
}

void showFont()
{
  const char* name = "FreeSans9pt7b.h";
  const GFXfont* f = &FreeSans9pt7b;
  //display.fillScreen(GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(f);
  display.setCursor(0, 0);
  display.println(name);
  display.println(" !\"#$%&'()*+,-./");
  display.println("0123456789:;<=>?");
  display.println("@ABCDEFGHIJKLMNO");
  display.println("PQRSTUVWXYZ[\\]^_");
  display.println("`abcdefghijklmno");
  display.println("pqrstuvwxyz{|}~ ");
  display.update();
}
