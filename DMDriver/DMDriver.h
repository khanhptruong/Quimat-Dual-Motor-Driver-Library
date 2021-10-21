/* --------------------------------------------------------------------------------------------------- *
* Khanh Truong - khanhptruong@csu.fullerton.edu
* California State University Fullerton
* Created: Oct 20 2017
*
* Description: Device driver for Quimat Dual Motor Driver Board. Initializes ports and handles output.
*
* Copyright 2017 
* --------------------------------------------------------------------------------------------------- */

#ifndef DMDriver_h
#define DMDriver_h

#include "Arduino.h"

class DMDriver{
public:
	DMDriver();
	void init(byte PIN_DIR1, byte PIN_PWM1, byte PIN_DIR2, byte PIN_PWM2);
	void run(bool D1, byte P1, bool D2, byte P2);
private:
	byte _PIN_DIR1;
	byte _PIN_PWM1;
	byte _PIN_DIR2;
	byte _PIN_PWM2;
};

#endif