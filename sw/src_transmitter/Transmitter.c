// File **********Transmitter.c***********
// Lab 9
// Programs to implement transmitter functionality   
// ECE445L Fall 2026
//    Jonathan W. Valvano 7/15/26
// Possible Hardware/software assigned to transmitter
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
//   Timer0A periodic interrupt to generate input
//   FreqFifo linkage from Encoder to SendData
//   Timer1A periodic interrupt create a sequence of frequencies
//   SPI1 MCP4921 DAC output
//   SysTick ISR output to DAC

#include <stdint.h>
#include <ti/devices/msp/msp.h>
#include "Joystick.h"
#include "../inc/Timer.h"
#include "FreqFIFO.h"
#include "../inc/MCP4921.h"
#include "../inc/UART.h"
#include "../inc/LaunchPad.h"

// ****ECE445L write this ****

  

void TIMG12_IRQHandler(void){ // priority 3
  if((TIMG12->CPU_INT.IIDX) == 1){ // this will acknowledge
    GPIOB->DOUTTGL31_0 = RED;   // toggle PB26

  }
}

void TIMG8_IRQHandler(void){// runs every 81.92ms, priority 1
  if((TIMG8->CPU_INT.IIDX) == 1){ // this will acknowledge
    GPIOB->DOUTTGL31_0 = GREEN; // toggle PB27
 
  }
}
  
// Highest priority Interrupt service routine
// Executed every 12.5ns * (period)
// ----------------    Sine Wave Generation     --------------------------------
void SysTick_Handler(void){ // priority 0
 
 
}
//---------------------   Transmitter_Init    ---------------------
// initialize switch interface
// Input: none
// Output: none 
void Transmitter_Init(void){ 

}


