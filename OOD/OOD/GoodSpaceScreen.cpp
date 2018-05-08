#include "GoodSpaceScreen.h"

void GoodSpaceScreen::setTemperature()
{

	float temp = 0;
	std::cout << "Enter a temprature for the goodspace: ";
	std::cin >> temp;

	wh->getCurrentWarehouse()->getGoodSpaceHandler()->getCurrentGoodSpace()->setTemp(temp);

}

GoodSpaceScreen::GoodSpaceScreen(): Interface(3)
{
}

GoodSpaceScreen::~GoodSpaceScreen()
{
}

std::string GoodSpaceScreen::displayOptions()
{
	return "1. Select a good\n 2. Set the temperature of the goodSpace\n";
}

void GoodSpaceScreen::runOption(int option, int *)
{
	switch (option)
	{
	case 1:
		selectGood();
		break;
	case 2:
		setTemperature();
		break;
	}
}

void GoodSpaceScreen::selectGood()
{
	int id = -1;
	std::cout << "Enter id for the good you want to select";
	std::cin >> id;

	wh->getCurrentWarehouse()->getGoodSpaceHandler()->getCurrentGoodSpace()->getGood(id);
}
