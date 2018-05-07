#ifndef WORLDSCREEN_H
#define WORLDSCREEN_H
#include "Interface.h"

class WorldScreen : public Interface
{
public:
private:
	void addWarehouse();
	// CHANGE! the ID will be asked for inside the function instead.
	void selectWarehouse();
	void removeWarehouse();
};

#endif
