#include "GoodSpaceScreen.h"

void GoodSpaceScreen::setTemperature()
{

	float temp = 0;
	std::cout << "Enter a temprature for the goodspace: ";
	std::cin >> temp;

	wh->getCurrentWarehouse()->getGoodSpaceHandler()->getCurrentGoodSpace()->setTemp(temp);

}

void GoodSpaceScreen::listGoods()
{
	std::vector<std::string> tmp;
	wh->getCurrentWarehouse()->getGoodSpaceHandler()->getCurrentGoodSpace()->getContent(tmp);
	for(int i = 0; i < tmp.size(); i++)
		std::cout << tmp[i] + "\n";
}

void GoodSpaceScreen::goBack(int * iF)
{
	*iF = 1;
}

GoodSpaceScreen::GoodSpaceScreen(WarehouseHandler * wh, UserHandler * uh): Interface(3)
{
	this->wh = wh;
	this->uh = uh;
}

GoodSpaceScreen::~GoodSpaceScreen()
{
}

std::string GoodSpaceScreen::displayOptions()
{
	return "1. Select a good\n2. Set the temperature of the goodSpace\n3. List all goods in this space.\n0. go back.\n";
}

void GoodSpaceScreen::runOption(int option, int * interface)
{
	switch (option)
	{
	case 0:
		goBack(interface);
		break;
	case 1:
		selectGood();
		*interface = 4;
		break;
	case 2:
		setTemperature();
		break;
	case 3:
		listGoods();
		break;
	}
}

void GoodSpaceScreen::selectGood()
{
	int id = -1;
	std::cout << "Enter id for the good you want to select:\n";
	std::cin >> id;

	wh->getCurrentWarehouse()->getGoodSpaceHandler()->getCurrentGoodSpace()->getGood(id);
}
