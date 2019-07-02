// #############################################################################
//
// # Name       : Controller
// # Version    : 0.1
//
// # Author     : Juan L. Perez Diez <ender.vs.melkor at gmail>
//
// # Description: Part of Model-View-Controller pattern. Couples Views to Model.
//
// #############################################################################

#ifndef __CONTROLLER_H
#define __CONTROLLER_H

#include <Arduino.h>
#include "../model/Model.h"

class Controller {
	public:
		Controller(Model*const);
		
		void setClock(const uint8_t, const uint8_t, const uint8_t, const uint8_t, const uint8_t, const int) const;

	private:
		Controller(const Controller&);
		Controller& operator=(const Controller&);
		
		Model *const _model;
};

#endif
	