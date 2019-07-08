#include "Model.h"

//This one gets called from the Controller and alets Views.
//The usual flow is that the controller triggers a model change and the model alerts the views of it's new status
void Model::exampleModelMethod() {
	//First we change something on the model
	_exampleVar != _exampleVar;
	//Then we alert the views through some event
	EventError event("This string comes from Model");
	notifyObservers(&event);
}