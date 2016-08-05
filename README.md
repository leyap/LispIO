# LispIO
provide some useful function make it easy to control io (arduino)

### Demo
> press button to open led

````
#include <LispIO.h>

//set led with pin 13
digitalOut led (13);

//set button with pin 12
digitalIn button (12);

void setup () {
//do nothing
}

void loop () {
	led = button;
}

// old style
// digitalWrite (led, digitalRead (button));
   
````
