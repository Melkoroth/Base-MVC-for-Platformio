// #############################################################################
//
// # Name       : Event
// # Version    : 1.0
//
// # Author     : Juan L. Perez Diez <ender.vs.melkor at gmail>
//
// # Description: Events are the way the Model notifies the Views
//
// #############################################################################

#ifndef __EVENT_H
#define __EVENT_H

#include <TimeLib.h>

enum class EventType {
	None,
	Error
};

class Event {
	public:
		Event();
		virtual ~Event();

		virtual EventType getType() const = 0;
		time_t getTimeStamp() const;

	protected:
		time_t _time;
};

#endif