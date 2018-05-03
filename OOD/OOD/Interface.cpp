#include "Interface.h"

Interface::Interface(int nrOfOptions)
{
	this->nrOfOptions = nrOfOptions;
	wh = new WarehouseHandler();
}
