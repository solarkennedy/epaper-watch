/*****************************************************************************
* | File      	:	EPD_2in13d.h
* | Author      :   Waveshare team
* | Function    :
* | Info        :
*----------------
* |	This version:   V1.0
* | Date        :   2018-06-07
* | Info        :   Basic version
*
******************************************************************************/
#ifndef __EPD2IN13D_H
#define __EPD2IN13D_H

#include "DEV_Config.h"
#include "SPI_RAM.h"

// Display resolution
#define EPD_WIDTH       104
#define EPD_HEIGHT      212

extern DEV *Dev;

class EPD2IN13D
{
    void EPD_Reset(void);
    void EPD_SendCommand(UBYTE Reg);
    void EPD_SendData(UBYTE Data);
    void EPD_WaitUntilIdle(void);
    void EPD_TurnOnDisplay(void);
    void EPD_SetFullReg(void);
    void EPD_SetPartReg(void);
    

public:
    UBYTE EPD_Init(void);
    void EPD_Clear(void);
    void EPD_DisplayFull(void);
    void EPD_DisplayPartial(UWORD Xstart, UWORD Ystart, UWORD Xend, UWORD Yend);
    void EPD_Sleep(void);
};


#endif /* EPD2IN13_H */

/* END OF FILE */
