// #############################################################################
//
// # Name       : Model
// # Version    : 0.2
//
// # Author     : Juan L. Perez Diez <ender.vs.melkor at gmail>
//
// # Description: Part of Model-View-Controller pattern.
//
// #############################################################################

#ifndef __MODEL_H
#define __MODEL_H

#include <TimeLib.h>

#include "ObservablePattern.h"
#include "MemAllocated.h"
#include "Setting.h"
#include "event/Event.h"

//Controls if HW outputs to serial or not
#define SERIAL_DEBUG_LOG 1
#if SERIAL_DEBUG_LOG
    #define Sprintln(x) (Serial.println(x))
    #define Sprint(x) (Serial.print(x))
#else
    #define Sprintln(x)
    #define Sprint(x)
#endif

extern const uint8_t LEDPIN; 
extern const uint8_t BUZZPIN;
extern const uint8_t SWITCHAPIN;
extern const uint8_t SWITCHBPIN;
extern const uint8_t BUTTONPIN;

class Model : public Observable {
	public:
		Model() : _initialized(false) {}

		void init();

		void setClock(const uint8_t, const uint8_t, const uint8_t, const uint8_t, const uint8_t, const int);

	private:
		Model(const Model&);
		Model& operator=(const Model&);

		bool _initialized;

};

#endif