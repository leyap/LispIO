// file     LispIO.h
// by lisper (leyapin@gmail.com)
//provide some useful function make it easy to control io
// Copyright (c) 2016 Lisper.li
// MIT License(索性将其开源出来)

class digitalOut {
	public :
		int pin;
		digitalOut (uint8_t thePin); 
		void write (uint8_t value); 
		void operator= (int state) {
			digitalWrite (pin, state);
		}
};

class digitalIn {
	public:
		int pin;
		digitalIn (uint8_t thePin); 
		uint8_t read (); 
		operator uint8_t () {
			return digitalRead (pin);
		}
};

class analogOut {
	public:
		int pin;
		analogOut (uint8_t thePin); 
		void write (uint8_t value); 
		void operator= (uint8_t value) {
			analogWrite (pin, value);
		}
};

class analogIn {
	public:
		int pin;
		analogIn (uint8_t thePin); 
		uint16_t read (); 
		operator uint16_t () {
			return analogRead (pin);
		}
};

