#include "GoodSpaceScreen.h"

void GoodSpaceScreen::setTemperature()
{

	float temp = 0;
	std::cout << "Enter a temprature for the goodspace: ";
	std::cin >> temp;

	wh->getCurrentWarehouse()->getGoodSpaceHandler()->getCurrentGoodSpace()->setTemp(temp);

}

void GoodSpaceScreen::selectGood()
{
	int id = -1;
	std::cout << "Enter id for the good you want to select";
	std::cin >> id;

	wh->getCurrentWarehouse()->getGoodSpaceHandler()->getCurrentGoodSpace()->getGood(id);
}
