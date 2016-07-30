// file     LispIO.cpp
// by lisper (leyapin@gmail.com)
// provide some useful function make it easy to control io
// Copyright (c) 2016 Lisper.li
// MIT License(索性将其开源出来)


#include <Arduino.h>
#include "LispIO.h"


digitalOut::digitalOut (uint8_t thePin) {
	pin = thePin;
	pinMode (thePin, OUTPUT);
}

void digitalOut:: write (uint8_t value) {
	digitalWrite (pin, value);
}


digitalIn::digitalIn (uint8_t thePin) {
	pin = thePin;
	pinMode (pin, INPUT);
}

uint8_t digitalIn::read () {
	return digitalRead (pin);
}

analogOut::analogOut (uint8_t thePin) {
	pin = thePin;
	pinMode (pin, OUTPUT);
}

void analogOut::write (uint8_t value) {
	analogWrite (pin, value);
}

analogIn::analogIn (uint8_t thePin) {
	pin = thePin;
	pinMode (pin, INPUT);
}

uint16_t analogIn::read () {
	return analogRead (pin);
}

