// File **********Joystick.c***********
// Lab9
// Programs to interface with Switch buttons and Joystick   
// ECE445L Fall 2026
//    Jonathan W. Valvano 7/15/26
// define your hardware interface
// 2-bit input, positive logic switches, positive logic software
//   bit1 PA28 SW1 switch 
//   bit0 PA27 SW2 switch 
// Joystick
//   PA24 VRx ADC0 channel 3
//   PA25 VRy ADC0 channel 2
//   PA26 SW positive logic internal pulldown

#include <stdint.h>
#include <ti/devices/msp/msp.h>
#include "../inc/LaunchPad.h"
// ****ECE445L write this ****

 
