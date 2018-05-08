#include "Menu.h"

Menu::Menu()
{
	this->selectedInterface = 0; //Worldscreen should be assigned to slot 0
	iF.push_back(new WorldScreen());
	iF.push_back(new WarehouseScreen());
	iF.push_back(new TruckScreen());
	iF.push_back(new GoodSpaceScreen());
	iF.push_back(new GoodScreen());
}

Menu::~Menu()
{
}

void Menu::runOptions(int options)
{
	IF->runOption(options, &selectedInterface);
}

void Menu::displayOptions()
{
	IF->displayOptions();
}
