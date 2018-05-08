#include "WorldScreen.h"

std::string WorldScreen::displayOptions()
{
	return "1. Add a warehouse\n 2. Select a warehouse\n 3. Remove a warehouse.";
}

void WorldScreen::runOption(int option, int *)
{
	switch (option)
	{
	case 1:
		addWarehouse();
		break;
	case 2:
		selectWarehouse();
		// sätt ut warehouseScreenen här...
		break;
	case 3:
		removeWarehouse();
		break;
	}
}

WorldScreen::WorldScreen():Interface(3)
{
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

	std::cout << "Warehouse \"" + name + "\" added";
}

void WorldScreen::selectWarehouse()
{
	int id;
	std::cout << "Please enter an ID for the warehouse you wish to select (max is " + std::to_string(wh->nrOfWarehouses() - 1); +"): ";
	std::cin >> id;

	wh->selectWarehouse(id);

	std::cout << "Warehouse \"" + wh->getWarehouse(id)->getName() + " \" is now selected";
}

void WorldScreen::removeWarehouse()
{
	int id;
	std::cout << "Please enter an ID of a warehouse you wish to delete (max is " + std::to_string(wh->nrOfWarehouses() - 1) + "): ";
	std::cin >> id;
	std::string name;
	name = wh->getWarehouse(id)->getName();

	wh->deleteWarehouse(id);

	std::cout << "Warehouse \"" + name + "\" is now removed.";
}
