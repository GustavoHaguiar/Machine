/*
	Machine.h - Library for make the blink.
	Created by Gustavo H. G. Aguiar, February 19, 2023.
	Released into the public domain.
*/
#include "Arduino.h"
#include "Machine.h"

Machine::Machine(int pin, int temp)
{
	pinMode(pin, OUTPUT);
	_pin = pin;
	_temp = temp;
}

void Machine::blinkl()
{
	digitalWrite(_pin, 1);
	delay(_temp);
	digitalWrite(_pin, 0);
	delay(_temp);
}