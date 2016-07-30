# LispIO
provide some useful function make it easy to control io (arduino)

### Demo
````
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
   
````
