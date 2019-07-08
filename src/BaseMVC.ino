// #############################################################################
// #
// # Name       : Base MVC project for Platformio development
// # Author     : Juan L. Perez Diez <ender.vs.melkor at gmail>
//
// # Description: Implements the Model View Controller software pattern
//
// #############################################################################

#include <Arduino.h>

#include "controller/Controller.h"

#include "model/Model.h"
#include "model/ObservablePattern.h"
#include "model/event/Event.h"
#include "model/event/EventError.h"

#include "view/ObserverPattern.h"
#include "view/SerialUI.h"

// *********************************************
// OBJECT CREATION
// *********************************************
Model model;
Controller controller(&model);
SerialUI serialUI(&controller);

// *********************************************
// SETUP
// *********************************************
void setup(void) {
	Serial.begin(115200);
    model.attachObserver(&serialUI);
}

// *********************************************
// MAIN LOOP LOGIC
// *********************************************
void loop(void) { 
	controller.exampleControl();
	delay(5000);
}