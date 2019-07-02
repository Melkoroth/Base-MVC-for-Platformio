#include "MemAllocated.h"

MemAllocated* MemAllocated::instance = 0;

MemAllocated* MemAllocated::getInstance() {
	if (instance == 0) {
		instance = new MemAllocated();
	}
	return instance;
}

int MemAllocated::getMemAllocated() {
	return getInstance()->_memAllocated;
}

void MemAllocated::addToMem(int num) {
	getInstance()->_memAllocated += num;
}