// #############################################################################
// #
// # Name       : Setting
// # Author     : Juan L. Perez Diez <ender.vs.melkor at gmail>
//
// # Description: Class used for storing & retrieving vars from EEPROM
//
// #############################################################################

#ifndef __SETTING_H
#define __SETTING_H

#include <EEPROM.h>
#include "MemAllocated.h"

#include <Arduino.h>

template<class TElem> 
class Setting {
	public:
		Setting();
		~Setting() {}

		Setting& operator=(const TElem&);
		operator const TElem&() const;

		void saveToEEPROM();
		void loadFromEEPROM();

		//Used to save char arrays
		//Length should be at most the one declared in object creation
		void assignCharArray(const char*, const int);

	private:	
		Setting(const Setting<TElem>&);
		Setting& operator=(const Setting<TElem>&);

		TElem _value;
		int _address;

		MemAllocated *_memAllocated;
};

template <class TElem>
Setting<TElem>::Setting() {
	_address = _memAllocated->getMemAllocated();
	_memAllocated->addToMem(sizeof(TElem));
}

template <class TElem>
Setting<TElem>& Setting<TElem>::operator=(const TElem &value) {
	_value = value;
	return *this;
}

template <class TElem>
Setting<TElem>::operator const TElem&() const {
	return _value;
}

template <class TElem>
void Setting<TElem>::saveToEEPROM() {   
	EEPROM.put(_address, _value);
	EEPROM.commit();
	//Serial.print("saveEEPROM: ");
	//Serial.println(_value);
}

template <class TElem>
void Setting<TElem>::loadFromEEPROM() {
	EEPROM.get(_address, _value);
	//Serial.print("loadEEPROM: ");
	//Serial.print(_address);
	//Serial.print(" -> ");
	//Serial.println(_value);
}

template <class TElem>
void Setting<TElem>::assignCharArray(const char* value, const int length) {
	strncpy(_value, (char*)value, length);
}

#endif