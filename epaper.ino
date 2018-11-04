#define CS_PIN           15
#define RST_PIN          5
#define DC_PIN           4
#define BUSY_PIN         16
#define LOW             0
#define HIGH            1
#define GPIO_PIN_SET   1
#define GPIO_PIN_RESET 0

#define EPD_WIDTH       104
#define EPD_HEIGHT      212

#include <SPI.h>
#include "epd2in13.h"

void epaperInit() {
  Serial.println("Setting up the e-paper display...");
  // SPI initialization
  pinMode(CS_PIN  , OUTPUT);
  pinMode(RST_PIN , OUTPUT);
  pinMode(DC_PIN  , OUTPUT);
  pinMode(BUSY_PIN,  INPUT);
  SPI.begin();

  EPD_Init_2in13d();
  EPD_Clear();

}

void EPD_SetFullReg(void)
{
    EPD_SendCommand(0X50);                      //VCOM AND DATA INTERVAL SETTING
    EPD_SendData(0x97);         //WBmode:VBDF 17|D7 VBDW 97 VBDB 57             WBRmode:VBDF F7 VBDW 77 VBDB 37  VBDR B7

    unsigned int count;
    EPD_SendCommand(0x20);
    for(count=0; count<44; count++) {
        EPD_SendData(lut_vcomDC_2in13d[count]);
    }

    EPD_SendCommand(0x21);
    for(count=0; count<42; count++) {
        EPD_SendData(lut_ww_2in13d[count]);
    }

    EPD_SendCommand(0x22);
    for(count=0; count<42; count++) {
        EPD_SendData(lut_bw_2in13d[count]);
    }

    EPD_SendCommand(0x23);
    for(count=0; count<42; count++) {
        EPD_SendData(lut_wb_2in13d[count]);
    }

    EPD_SendCommand(0x24);
    for(count=0; count<42; count++) {
        EPD_SendData(lut_bb_2in13d[count]);
    }
}

void EPD_TurnOnDisplay(void)
{
    EPD_SendCommand(0x12);               //DISPLAY REFRESH
    delay(100);     //!!!The delay here is necessary, 200uS at least!!!
    EPD_WaitUntilIdle();
}


void EPD_Clear(void)
{
    unsigned int Width = (EPD_WIDTH % 8 == 0)? (EPD_WIDTH / 8 ): (EPD_WIDTH / 8 + 1);
    unsigned int Height = EPD_HEIGHT;

    //send black data
    EPD_SendCommand(0x10);
    for (unsigned int j = 0; j < Height; j++) {
        for (unsigned int i = 0; i < Width; i++) {
            EPD_SendData(0x00);
        }
    }
    delay(10);

    //send red data
    EPD_SendCommand(0x13);
    for (unsigned int j = 0; j < Height; j++) {
        for (unsigned int i = 0; i < Width; i++) {
            EPD_SendData(0xFF);
        }
    }
    delay(10);

    EPD_SetFullReg();
    EPD_TurnOnDisplay();
}
