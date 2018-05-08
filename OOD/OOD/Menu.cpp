#include "Menu.h"

Menu::Menu()
{
	this->selectedInterface = 0; //Worldscreen should be assigned to slot 0
	WarehouseHandler * wh = new WarehouseHandler();
	UserHandler * uh = new UserHandler();

	iF.push_back(new WorldScreen(wh,uh));
	iF.push_back(new WarehouseScreen(wh, uh));
	iF.push_back(new TruckScreen(wh, uh));
	iF.push_back(new GoodSpaceScreen(wh, uh));
	iF.push_back(new GoodScreen(wh, uh));
}

Menu::~Menu()
{
}

void Menu::runOptions(int options)
{
	iF[selectedInterface]->runOption(options, &selectedInterface);
}

void Menu::displayOptions()
{
	std::cout << iF[selectedInterface]->displayOptions() + "\n";
}
