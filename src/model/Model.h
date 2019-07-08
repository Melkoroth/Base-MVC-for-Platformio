// #############################################################################
//
// # Name       : Model
// # Author     : Juan L. Perez Diez <ender.vs.melkor at gmail>
//
// # Description: Part of Model-View-Controller pattern.
//
// #############################################################################

#ifndef __MODEL_H
#define __MODEL_H

#include "ObservablePattern.h"
#include "event/Event.h"
#include "event/EventError.h"

class Model : public Observable {
	public:
		Model() {}

		//This one gets called from the Controller and alets Views.
		void exampleModelMethod();

	private:
		//Forbids copy
		Model(const Model&);
		Model& operator=(const Model&);

		bool _exampleVar;

};

#endif