#include "Controller.h"

Controller::Controller(Model *const model) : _model(model) {}

void Controller::exampleControl() const {
	_model->exampleModelMethod();
}
