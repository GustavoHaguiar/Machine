/*
	Machine.h - Library for make the blink.
  Created by Gustavo H. G. Aguiar, February 19, 2023.
  Released into the public domain.
*/
#ifndef Machine_h
#define Machine_h

#include "Arduino.h"

class Machine
{
	public:
		Machine(int pin, int temp);
		void blinkl();
	private:
		int _pin;
		int _temp;
};

#endif