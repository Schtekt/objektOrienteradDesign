#include "Interface.h"

Interface::Interface(int nrOfOptions)
{
	this->nrOfOptions = nrOfOptions;
	wh = new WarehouseHandler();
	uh = new UserHandler();
}

Interface::~Interface()
{
	delete wh;
	delete uh;
}
