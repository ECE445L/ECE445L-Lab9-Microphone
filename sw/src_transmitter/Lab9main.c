/* Lab9main.c
 * This is a C language project that implements ECE445L Lab9 transmitter.
 * Jonathan Valvano
 * June 29, 2026
 */
// Possible hardware interface
// 2-bit input, positive logic switches, positive logic software
//   bit1 PA28 SW1 switch 
//   bit0 PA27 SW2 switch 
// Joystick
//   PA24 VRx ADC0 channel 3
//   PA25 VRy ADC0 channel 2
//   PA26 SW positive logic internal pulldown
// MCP4921
// pin signal MSPM0   mode
//  1   Vdd   +3.3V
//  2   /CS   PA8    SPI0_CS0
//  3   SCLK  PB18   SPII_SCK
//  4   SDI   PB17   SPI_PICO
//  5   /LDAC ground
//  6   REF          1.255 V refernce
//  7   AGND         ground
//  8   OUT          DAC output

#include <ti/devices/msp/msp.h>
#include "../inc/LaunchPad.h"
#include "../inc/Clock.h"
#include "../inc/MCP4921.h"
#include "../inc/ST7735_SDC.h"
#include "Transmitter.h"




int main(void){ // main to run Lab9 transmitter
  __disable_irq(); 

  LaunchPad_Init();
  Clock_Init_HFXT_40_80MHz(0);  // 0.005% accurate running off external crystal oscillator

  ST7735_InitR(INITR_REDTAB); //INITR_REDTAB for AdaFruit, INITR_BLACKTAB for SPI HiLetgo ST7735R
  ST7735_FillScreen(ST7735_BLACK);
  ST7735_SetCursor(0, 0);  
  ST7735_OutString("ECE445L Lab9\n");
  ST7735_OutString("Transmitter\n");
  TIMG0->COUNTERREGS.CTRCTL &= ~0x01; // disarm if not using SDC
  MCP4921_Init(2048);
  Transmitter_Init();
  __enable_irq();
  while(1){
    __WFI();
  }
}


// Executed every 1 ms
void TIMG0_IRQHandler(void){
  if((TIMG0->CPU_INT.IIDX) == 1){ // this will acknowledge
// the SDC interface will use this
  }
}