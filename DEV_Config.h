
#ifndef _DEV_CONFIG_H_
#define _DEV_CONFIG_H_

#include <SPI.h>
#include <Wire.h>
#include <stdint.h>

/**
 * data
**/
#define UBYTE   uint8_t
#define UWORD   uint16_t
#define UDOUBLE uint32_t


/**
 * e-Paper GPIO
**/
#define EPD_CS 10
#define EPD_CS_0     digitalWrite(EPD_CS, LOW)
#define EPD_CS_1     digitalWrite(EPD_CS, HIGH)

#define EPD_DC 9
#define EPD_DC_0     digitalWrite(EPD_DC, LOW)
#define EPD_DC_1     digitalWrite(EPD_DC, HIGH)

#define EPD_RST 8
#define EPD_RST_0     digitalWrite(EPD_RST, LOW)
#define EPD_RST_1     digitalWrite(EPD_RST, HIGH)

#define EPD_BUSY 7
#define EPD_BUSY_RD   digitalRead(EPD_BUSY)

/**
 * SPI
**/
#define SPI_Write_Byte(__DATA) SPI.transfer(__DATA)
#define SPI_Read_Byte(__DATA) SPI.transfer(__DATA)

class DEV
{
public:
    UBYTE System_Init(void);

    void Dev_Delay_ms(UWORD xms);
    void Dev_Delay_us(UWORD xus);
};
extern DEV *Dev;

#endif
