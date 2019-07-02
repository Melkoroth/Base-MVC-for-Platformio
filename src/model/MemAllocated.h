// #############################################################################
// #
// # Name       : MemAllocated
// # Author     : Juan L. Perez Diez <ender.vs.melkor at gmail>
//
// # Description: Used to have a counter of the memory allocation that has been done
//
// #############################################################################
#ifndef __MEMALLOCATED_H
#define __MEMALLOCATED_H

//Used to have a counter of the memory allocation that has been done
//Singleton pattern
class MemAllocated {
	public:
		static MemAllocated* getInstance();
		int getMemAllocated();
		void addToMem(int);

	private:
		MemAllocated() { _memAllocated = 0; }
		MemAllocated(MemAllocated const&);
		void operator=(MemAllocated const&);

		static MemAllocated* instance;
		int _memAllocated;
};

#endif