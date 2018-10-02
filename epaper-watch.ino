#include "EPD_2in13d.h"
#include "GUI_Paint.h"
#include "DEV_Config.h"
#include <Wire.h>

GUIPAINT paint;
EPD2IN13D epd;


void setup_epaper()
{
  Dev->System_Init();
  Serial.print("2.13inch e-Paper D demo\n");
  //Initialize e-Paper
  if (epd.EPD_Init() != 0) {
    Serial.print("e-Paper init failed");
    return;
  }
  epd.EPD_Clear();
  Serial.print("/*************/\r\nPartial display routine\r\n");
  paint.Paint_NewImage(IMAGE_BW, EPD_WIDTH, EPD_HEIGHT, IMAGE_ROTATE_90, IMAGE_COLOR_POSITIVE);
  paint.Paint_Clear(WHITE);
  //epd.EPD_DisplayPartial(0, 0, Paint_Image.Image_Width, Paint_Image.Image_Height);
  Dev->Dev_Delay_ms(500);
}

void setup()
{

  Serial.begin(115200);
  //setup_epaper();

  Serial.print("Show time\r\n");
  PAINT_TIME nowtime;
  nowtime.Hour = 1;
  nowtime.Min = 23;
  nowtime.Sec = 0;

  sFONT font = Font24;
  UWORD Xstart = 40;
  UWORD Ystart = 40;
  for (;;) {
    //paint.Paint_DrawTime(Xstart, Ystart, &nowtime, &font, WHITE, BLACK);
    nowtime.Min = nowtime.Min + 1;
    delay(1000);
    if (nowtime.Sec == 60) {
      nowtime.Min = nowtime.Min + 1;
      nowtime.Sec = 0;
      if (nowtime.Min == 60) {
        nowtime.Hour =  nowtime.Hour + 1;
        nowtime.Min = 0;
        if (nowtime.Hour == 24) {
          nowtime.Hour = 0;
          nowtime.Min = 0;
          nowtime.Sec = 0;
        }
      }
    }

    //Brushing the entire screen is not as obvious as painting a window.
    //epd.EPD_DisplayPartial(0, 0, Paint_Image.Image_Width, Paint_Image.Image_Height);
    print_minute((nowtime.Min + nowtime.Hour * 60) % 1440);
  }
  //epd.EPD_Sleep();


}

void loop()
{

}
