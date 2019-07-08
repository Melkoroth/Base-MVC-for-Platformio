#include "SerialUI.h"

//This gets called from inside the model to trigger a View change
void SerialUI::update(Event *const e) {
	//Display time of trigger
	printTimeStamp(e->getTimeStamp());
	//Call subroutine
	switch (e->getType()) {
		case EventType::Error:
			handleError(e);
			break;
		case EventType::None:
			break;
	}
	Serial.println();
}

//Specific Event handling example
void SerialUI::handleError(Event *e) {
	//Cast the generic event to it's true type
	EventError *event = static_cast<EventError*>(e);
	//Display the event changes
	Serial.println(F("EventError"));
	Serial.println(pmChar(ExampleStr));
	Serial.println(event->getMessage());
}

//Prints number preceeded by a '0' if needed
void SerialUI::printDecNum(const uint8_t num) const {
	(num < 10) ? Serial.print(F("0")) : 0;
	Serial.print(num);
}

//Writes "HH:MM:SS -
void SerialUI::printTimeStamp(const time_t t) const {
	uint8_t h = hour(t);
	uint8_t m = minute(t);
	uint8_t s = second(t);
	uint8_t d = day(t);
	uint8_t mo = month(t);
	uint16_t y = year(t);
	printDecNum(h);
	Serial.print(F(":"));
	printDecNum(m);
	Serial.print(F(":"));
	printDecNum(s);
	Serial.print(F(" @ "));
	printDecNum(d);
	Serial.print(F("-"));
	printDecNum(mo);
	Serial.print(F("-"));
	Serial.print(y);
	Serial.print(F(" -> "));
}

//Converts a char array from PROGMEM to variable in SRAM
//TODO: Use strncpy_P to check max size
char* SerialUI::pmChar(const char *pmArray) {
	strcpy_P(_stringBuffer, (char*)pmArray);
	return _stringBuffer;
}