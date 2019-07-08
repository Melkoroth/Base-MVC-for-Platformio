// #############################################################################
//
// # Name       : EventError
// # Author     : Juan L. Perez Diez <ender.vs.melkor at gmail>
//
// # Description: Example Event class
//
// #############################################################################

#ifndef __EVENTERROR_H
#define __EVENTERROR_H

#include "Event.h"

class EventError : public Event {
	public:
		EventError(char*);
		virtual ~EventError() {}

		virtual EventType getType() const override;
		
		char* getMessage() const;

	protected:
		char *_message;
};

#endif