#include "Interface.h"

void Interface::goBack(int * iF)
{
	switch (*iF)
	{
	case 1:
		*iF = 0;
		break;
	case 2:
		*iF = 1;
		break;
	case 3:
		*iF = 1;
		break;
	case 4:
		*iF = 3;
		break;
	case 0:
		
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
