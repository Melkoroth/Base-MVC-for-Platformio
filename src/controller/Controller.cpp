#include "Controller.h"

Controller::Controller(Model *const model) : _model(model) {}

void Controller::setClock(const uint8_t h, const uint8_t m, const uint8_t s, const uint8_t d, const uint8_t mo, const int y) const {
	_model->setClock(h, m, s, d, mo, y);
}
