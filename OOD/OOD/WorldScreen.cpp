#include "WorldScreen.h"

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
