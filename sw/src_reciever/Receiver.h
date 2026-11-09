// Receiver.h
// Programs to implement receiver functionality   
// ECE445L Fall 2026
//    Jonathan W. Valvano 7/16/26

// ----------------------------------------------------------------------------
// Hardware/software assigned to reciever
//   Timer G8 ADC1 samples sound
//   DecodeFIFO linkage from  ADC to Decoder
//   main-loop runs decoder

#ifndef __RECEIVER_H__
#define __RECEIVER_H__
#include <stdint.h>
// write this
// ***solution***
// Solution to Lab5 (not to be shown to students)

// Sample time is 25ns*period*prescale
// Timer G8 is power Domain PD0
void Receiver_Init(uint32_t period,uint32_t prescale);
uint8_t Receiver_Decode(void);

#endif
