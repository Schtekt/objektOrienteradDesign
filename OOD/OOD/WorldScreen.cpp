#include "WorldScreen.h"

std::string WorldScreen::displayOptions()
{
	return "1. Add a warehouse\n2. Select a warehouse\n3. Remove a warehouse.\n0. Exit.\n";
}

void WorldScreen::runOption(int option, int * iF)
{
	switch (option)
	{
	case 0:
		goBack(iF);
		break;
	case 1:
		addWarehouse();
		break;
	case 2:
		selectWarehouse();
		*iF = 1;
		break;
	case 3:
		removeWarehouse();
		break;
	}
}

WorldScreen::WorldScreen(WarehouseHandler * wh, UserHandler * uh):Interface(3)
{
	this->wh = wh;
	this->uh = uh;
}

WorldScreen::~WorldScreen()
{
}

void WorldScreen::addWarehouse()
{
	std::string name;
	std::cout << "Please enter a name for this new warehouse: ";
	std::cin >> name;

	wh->addWarehouse(name);

	std::cout << "Warehouse \"" + name + "\" added\n";
}

void WorldScreen::selectWarehouse()
{
	int id;
	std::cout << "Please enter an ID for the warehouse you wish to select (max is " + std::to_string(wh->nrOfWarehouses() - 1) + "): ";
	std::cin >> id;

	wh->selectWarehouse(id);

	std::cout << "Warehouse \"" + wh->getWarehouse(id)->getName() + " \" is now selected\n";
}

void WorldScreen::removeWarehouse()
{
	int id;
	std::cout << "Please enter an ID of a warehouse you wish to delete (max is " + std::to_string(wh->nrOfWarehouses() - 1) + "): ";
	std::cin >> id;
	std::string name;
	name = wh->getWarehouse(id)->getName();

	wh->deleteWarehouse(id);

	std::cout << "Warehouse \"" + name + "\" is now removed.\n";
}

void WorldScreen::goBack(int * iF)
{
	*iF = -1;
}
