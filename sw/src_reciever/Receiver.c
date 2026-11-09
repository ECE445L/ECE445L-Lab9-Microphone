// Receiver.c
// Lab 9
// Programs to implement receiver functionality   
// ECE445L Fall 2026
//    Jonathan W. Valvano 7/15/26

// ----------------------------------------------------------------------------
// Hardware/software assigned to receiver
//   Timer G8 PB19 ADC1 channel 6 samples sound
//   DecodeFIFO linkage from  ADC to Decoder
//   main-loop runs decoder
// PB19 ADC1 channel 6 J3.23 microphone

//   PA2-PA7, SSI0, ST7735R

#include <stdint.h>
#include <ti/devices/msp/msp.h>
#include "../inc/DFT.h"
#include "../inc/Timer.h"
#include "../inc/Median.h"
#include "../inc/ADC.h"
#include "DecodeFIFO.h"
// ****ECE445L write this ****



// -----------     Receiver_Init    -----------------------------
// Sample ADC1 channel 6
// Timer G8: enabled for real time sampling, priority 0
void Receiver_Init(uint32_t period,uint32_t prescale){

}

void TIMG8_IRQHandler(void){// runs at the sampling rate, priority 0
  if((TIMG8->CPU_INT.IIDX) == 1){ // this will acknowledge

  }
}
// start, 8 data, even parity

uint8_t Receiver_Decode(void){ // called from main loop
 
  return 0;
}


