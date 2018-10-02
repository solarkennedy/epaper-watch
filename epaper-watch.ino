#include "EPD_2in13d.h"
#include "GUI_Paint.h"
#include "DEV_Config.h"
#include "ImageData.h"
#include <Wire.h>

GUIPAINT paint;
EPD2IN13D epd;

void setup()
{


  Dev->System_Init();
  Serial.print("2.13inch e-Paper D demo\n");
  //Initialize e-Paper
  if (epd.EPD_Init() != 0) {
    Serial.print("e-Paper init failed");
    return;
  }
  epd.EPD_Clear();

#if 0
  /*show image for array*/
  Serial.println("Draw black image");
  paint.Paint_NewImage(IMAGE_BW, EPD_WIDTH, EPD_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_POSITIVE);
  paint.Paint_DrawBitMap(gImage_IMAGE);

  Serial.println("Refresh the image in RAM to e-Paper");
  epd.EPD_DisplayFull();
  Dev->Dev_Delay_ms(2000);
#endif

#if 0
  /*Horizontal screen*/
  //1.Draw black image
  paint.Paint_NewImage(IMAGE_BW, EPD_WIDTH, EPD_HEIGHT, IMAGE_ROTATE_90, IMAGE_COLOR_POSITIVE);
  paint.Paint_Clear(WHITE);

  //2.Drawing on the image
  paint.Paint_DrawPoint(10, 70, BLACK, DOT_PIXEL_1X1, DOT_STYLE_DFT);
  paint.Paint_DrawPoint(10, 80, BLACK, DOT_PIXEL_2X2, DOT_STYLE_DFT);
  paint.Paint_DrawPoint(10, 90, BLACK, DOT_PIXEL_3X3, DOT_STYLE_DFT);

  paint.Paint_DrawLine(20, 70, 70, 100, BLACK, LINE_STYLE_SOLID, DOT_PIXEL_1X1);
  paint.Paint_DrawLine(70, 70, 20, 100, BLACK, LINE_STYLE_SOLID, DOT_PIXEL_1X1);
  paint.Paint_DrawLine(180, 70, 180, 100, BLACK, LINE_STYLE_DOTTED, DOT_PIXEL_1X1);
  paint.Paint_DrawLine(165, 85, 195, 85, BLACK, LINE_STYLE_DOTTED, DOT_PIXEL_1X1);

  paint.Paint_DrawRectangle(20, 70, 70, 100, BLACK, DRAW_FILL_EMPTY, DOT_PIXEL_1X1);
  paint.Paint_DrawRectangle(80, 70, 130, 100, BLACK, DRAW_FILL_FULL, DOT_PIXEL_1X1);

  paint.Paint_DrawCircle(180, 85, 15, BLACK, DRAW_FILL_EMPTY, DOT_PIXEL_1X1);
  paint.Paint_DrawCircle(180, 45, 15, BLACK, DRAW_FILL_FULL, DOT_PIXEL_1X1);

  paint.Paint_DrawString_EN(10, 2, "Waveshare Electronic", &Font12, BLACK, WHITE);
  paint.Paint_DrawString_EN(10, 20, "hello world", &Font12, WHITE, BLACK);

  // printf("paint.Paint_DrawNum screen\n"); paint.Paint_DrawNum(10, 33, 123456789, &Font12, BLACK, WHITE);
  paint.Paint_DrawNum(10, 50, 987654321, &Font16, WHITE, BLACK);

  //3.Refresh the image in RAM to e-Paper
  epd.EPD_DisplayFull();
  Dev->Dev_Delay_ms(2000);
#endif

#if 1
  Serial.print("/*************/\r\nPartial display routine\r\n");
  paint.Paint_NewImage(IMAGE_BW, EPD_WIDTH, EPD_HEIGHT, IMAGE_ROTATE_90, IMAGE_COLOR_POSITIVE);
  paint.Paint_Clear(WHITE);
  epd.EPD_DisplayPartial(0, 0, Paint_Image.Image_Width, Paint_Image.Image_Height);
  Dev->Dev_Delay_ms(500);

  Serial.print("Show time\r\n");
  PAINT_TIME nowtime;
  nowtime.Hour = 23;
  nowtime.Min = 59;
  nowtime.Sec = 50;

  sFONT font = Font24;
  UWORD Xstart = 40;
  UWORD Ystart = 40;
  for (;;) {
    paint.Paint_DrawTime(Xstart, Ystart, &nowtime, &font, WHITE, BLACK);
    nowtime.Sec = nowtime.Sec + 1;
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
    epd.EPD_DisplayPartial(0, 0, Paint_Image.Image_Width, Paint_Image.Image_Height);
  }
#endif
  epd.EPD_Sleep();

}

void loop()
{

}
