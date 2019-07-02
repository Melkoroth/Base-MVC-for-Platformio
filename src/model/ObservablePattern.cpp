#include "ObservablePattern.h"

Observable::Observable() {}

Observable::Observable(const Observable &other) {
	_observers = other._observers;
}

Observable& Observable::operator=(const Observable& other) { 
	_observers = other._observers;	
	return *this; 
}

Observable::~Observable() {}

void Observable::attachObserver(Observer* o) {
	_observers.add(o);
}

void Observable::detachObserver(Observer* o) {
	_observers.remove(o);
}

void Observable::notifyObservers(Event* ev) {
	for (_observers.restart(); !_observers.isEnd(); _observers.forward())
		_observers.actual()->update(ev);
}