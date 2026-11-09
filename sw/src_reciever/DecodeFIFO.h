// DecodeFIFO.h
// Runs on any computer
// Provide functions that initialize a FIFO, put data in, get data out,
// and return the current size.  The file includes a decode FIFO
// using index implementation 

// Daniel Valvano
// July 16, 2026

/* This example accompanies the book
   "Embedded Systems: Real Time Interfacing to Arm Cortex M Microcontrollers",
   ISBN: 978-1463590154, Jonathan Valvano, copyright (c) 2026

 Copyright 2025 by Jonathan W. Valvano, valvano@mail.utexas.edu
    You may use, edit, run or distribute this file
    as long as the above copyright notice remains
 THIS SOFTWARE IS PROVIDED "AS IS".  NO WARRANTIES, WHETHER EXPRESS, IMPLIED
 OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
 MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
 VALVANO SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL,
 OR CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
 For more information about my classes, my research, and my books, see
 http://users.ece.utexas.edu/~valvano/
 */

#ifndef __DECODEFIFO_H__
#define __DECODEFIFO_H__

// Two-index implementation of the decode FIFO
// can hold 0 to DECODEFIFOSIZE elements
#define DECODEFIFOSIZE 16 // must be a power of 2
#define DECODEFIFOSUCCESS 1
#define DECODEFIFOFAIL    0
typedef int8_t decodeDataType;

// initialize index FIFO
void DecodeFifo_Init(void);
// add element to end of index FIFO
// return TXFIFOSUCCESS if successful
int DecodeFifo_Put(decodeDataType data);
// remove element from front of index FIFO
// return TXFIFOSUCCESS if successful
int DecodeFifo_Get(decodeDataType *datapt);
// number of elements in index FIFO
// 0 to TXFIFOSIZE-1
uint32_t DecodeFifo_Size(void);



#endif //  __DECODEFIFO_H__
