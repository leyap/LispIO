// file     LispIODemo.ino
// by lisper (leyapin@gmail.com)
// provide some useful function make it easy to control io
// Copyright (c) 2016 Lisper.li
// MIT License(索性将其开源出来)


#include <LispIO.h>

digitalOut led (13);
digitalIn button (12);

void setup () {
}

void loop () {
  led = button;
}


// old style
// digitalWrite (led, digitalRead (button));
