#include "EventError.h"

EventError::EventError(char* message) : _message(message) {}

EventType EventError::getType() const {
	return EventType::Error;
}

char* EventError::getMessage() const {
	return _message;
}