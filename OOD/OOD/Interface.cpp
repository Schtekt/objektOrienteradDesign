#include "Interface.h"

void Interface::goBack(int * iF)
{
	switch (*iF)
	{
	case 1:
		*iF = 0;
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		break;
	}
}

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
