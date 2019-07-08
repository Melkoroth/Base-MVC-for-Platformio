// #############################################################################
//
// # Name       : Observer pattern class
// # Author     : Juan L. Perez Diez <ender.vs.melkor at gmail>
//
// # Description: Implements a generic Observer Pattern
//
// #############################################################################

#ifndef __OBSERVERPATTERN_H
#define __OBSERVERPATTERN_H

#include "../model/event/Event.h"

class Observer {
	public:
		virtual ~Observer() {};
		virtual void update(Event *const) = 0;	
};

#endif