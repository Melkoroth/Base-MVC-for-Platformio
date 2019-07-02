// #############################################################################
// #
// # Name       : HLocky Firmware
// # Author     : Juan L. Perez Diez <ender.vs.melkor at gmail>
// #
// #############################################################################

#include <Arduino.h>
#include <EEPROM.h>

#include "model/MemAllocated.h"
#include "model/Setting.h"

const float VERSIONNUMBER = 0.1;

// *********************************************
// PINOUT ASSIGN
// *********************************************
const uint8_t BUZZPIN = 0;
const uint8_t LEDPIN = 0;
const uint8_t MOTORAPIN = 0;
const uint8_t MOTORBPIN = 0;
const uint8_t PHOTOPIN = 0;
const uint8_t VIBRATIONPIN = 0;

// *********************************************
// CONFIG
// *********************************************
//Controls if HW outputs to serial or not
#define SERIAL_DEBUG_LOG 1
#if SERIAL_DEBUG_LOG
    #define Sprintln(x) (Serial.println(x))
    #define Sprint(x) (Serial.print(x))
#else
    #define Sprintln(x)
    #define Sprint(x)
#endif

// *********************************************
// SETUP
// *********************************************
void setup(void) {
	Serial.begin(115200);
}

// *********************************************
// MAIN LOOP LOGIC
// *********************************************
void loop(void) { 

}