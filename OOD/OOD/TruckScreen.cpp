#include "TruckScreen.h"

void TruckScreen::pickUp()
{
	Truck * truck = wh->getCurrentWarehouse()->getTruckHandler()->getSelectedTruck();
	if (truck->setGood(wh->getCurrentWarehouse()->getGoodSpaceHandler()->getCurrentGoodSpace()->getCurrentGood()))
	{
		int pos[2];
		wh->getCurrentWarehouse()->getGoodSpaceHandler()->getSelectedPos(pos);
		truck->setPos(pos);
		wh->getCurrentWarehouse()->getGoodSpaceHandler()->getCurrentGoodSpace()->removeGood();
	}
	else
	{
		std::cout << "Error, the truck already carries a good, plese put it down before putting another one in its place.";
	}
}

void TruckScreen::putDown()
{
	Good * g = nullptr;
	Warehouse * w = wh->getCurrentWarehouse();
	Truck * truck = w->getTruckHandler()->getSelectedTruck();

	if (truck->getGood(g))
	{
		int pos[2];
		std::cout << "Please enter a position where you would like to put down the good\n x:";
		std::cin >> pos[0];
		std::cout << "\n y:";
		std::cin >> pos[1];

		int size[2];
		w->getGoodSpaceHandler()->getSize(size);
		if (pos[0] >= 0 && pos[0] < size[0] && pos[1] >= 0 && pos[1] < size[1])
		{
			truck->setPos(pos);
			w->getGoodSpaceHandler()->getGoodSpace(pos)->addGood(g);
			truck->setCarries(false);
		}
	}
}

std::string TruckScreen::displayOptions()
{
	return "1. Move truck\n";
}

void TruckScreen::runOption(int option, int *)
{
	switch (option)
	{
	case 1:
		pickUp();
		break;
	case 2:
		putDown();
		break;
	}
}
