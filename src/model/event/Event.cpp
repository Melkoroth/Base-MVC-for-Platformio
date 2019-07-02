#include "Event.h"

Event::Event() : _time(now()) {}

Event::~Event() {}

EventType Event::getType() const {
	return EventType::None;
}

time_t Event::getTimeStamp() const {
	return _time;
}