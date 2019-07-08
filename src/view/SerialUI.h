// #############################################################################
//
// # Name       : Serial User Interface. Implements Observer pattern class
// # Author     : Juan L. Perez Diez <ender.vs.melkor at gmail>
//
// # Description: Serial UI that follows the Observer Pattern
//
// #############################################################################

#ifndef __SERIALUI_H
#define __SERIALUI_H

#include <HardwareSerial.h>

#include "ObserverPattern.h"
#include "../controller/Controller.h"
#include "../model/event/Event.h"
#include "../model/event/EventError.h"

const char ExampleStr[] PROGMEM = "This is a PROGMEM string";

class SerialUI : public Observer {
	public:
		SerialUI(const Controller *const c) : _controller(c) {}
		virtual ~SerialUI() {}

		//This gets called from inside the model to trigger a View change
		virtual void update(Event *const);

	private:
		//Forbids object copy
		SerialUI(const SerialUI&);
		SerialUI& operator=(const SerialUI&);

		//Event-handling functions
		void handleError(Event *const);

		//Aux functions
		void printDecNum(const uint8_t) const;
		void printTimeStamp(const time_t) const;

		const Controller *const _controller;

		//SRAM buffer of PROGMEM strings
		static const uint8_t MAXCHARS = 40;
		char _stringBuffer[MAXCHARS];
		char* pmChar(const char *pmArray);
};

#endif