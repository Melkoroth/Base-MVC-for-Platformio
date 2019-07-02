// #############################################################################
//
// # Name       : Observable pattern class
// # Version    : 1.0
//
// # Author     : Juan L. Perez Diez <ender.vs.melkor at gmail>
//
// # Description: Holds a Sequence of Observers to be notified
//
// #############################################################################

#ifndef __OBSERVABLE_H
#define __OBSERVABLE_H

#include <Sequence.h>
#include "../view/ObserverPattern.h"
#include "event/Event.h"

class Observable {
	public:
		Observable();
		virtual ~Observable();
		virtual void attachObserver(Observer*);
		virtual void detachObserver(Observer*);
		virtual void notifyObservers(Event*);

	private:
		Observable(const Observable&);
		Observable& operator=(const Observable&);
		CSequence<Observer*> _observers;
};

#endif