#include "Event.h"

Event::Event() : _time(now()) {}

EventType Event::getType() const {
	return EventType::None;
}

time_t Event::getTimeStamp() const {
	return _time;
}