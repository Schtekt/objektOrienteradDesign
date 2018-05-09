#include "Menu.h"

Menu::Menu()
{
	this->selectedInterface = 0; //Worldscreen should be assigned to slot 0
	// will be deleted in WorldScreen
	//WarehouseHandler * wh = new WarehouseHandler();
	uh = new UserHandler();
	wh = new WarehouseHandler();

	iF.push_back(new WorldScreen(wh,uh));
	iF.push_back(new WarehouseScreen(wh, uh));
	iF.push_back(new TruckScreen(wh, uh));
	iF.push_back(new GoodSpaceScreen(wh, uh));
	iF.push_back(new GoodScreen(wh, uh));
}

Menu::~Menu()
{
	for (int i = 0; i < 5; i++)
	{
		delete iF[i];
	}
	delete wh;
	delete uh;
}

bool Menu::runOptions(int options)
{
	bool res = true;
	iF[selectedInterface]->runOption(options, &selectedInterface);

	if (selectedInterface == -1)
	{
		res = false;
	}
	return res;
}

void Menu::displayOptions()
{
	std::cout << iF[selectedInterface]->displayOptions() + "\n";
}
