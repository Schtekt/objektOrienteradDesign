#include "TruckScreen.h"

void TruckScreen::pickUp()
{
	Truck * truck = wh->getCurrentWarehouse()->getTruckHandler()->getSelectedTruck();
	int pos[2];
	pos[0] = 0;
	pos[1] = 0;
	wh->getCurrentWarehouse()->getGoodSpaceHandler()->getSelectedPos(pos);
	if (pos[0] == -1 || pos[1] == -1)
	{
		std::cout << "No good space have been selected, plese enter coordinates\nx: ";
		std::cin >> pos[0];
		std::cout << "y: ";
		std::cin >> pos[1];
	}
	if (wh->getCurrentWarehouse()->getGoodSpace(pos)->getSize() > 0)
	{
		if (truck->setGood(*wh->getCurrentWarehouse()->getGoodSpaceHandler()->getGoodSpace(pos)->getCurrentGood()))
		{
			wh->getCurrentWarehouse()->getGoodSpaceHandler()->getSelectedPos(pos);
			truck->setPos(pos);
			wh->getCurrentWarehouse()->getGoodSpaceHandler()->getCurrentGoodSpace()->removeGood(wh->getCurrentWarehouse()->getGoodSpaceHandler()->getCurrentGoodSpace()->getSelectedPos());
		}
		else
		{
			std::cout << "Error, the truck already carries a good, plese put it down before putting another one in its place.\n";
		}
	}
	else
	{
		std::cout << "Error, there is no good in this space (position :" + std::to_string(pos[0]) + ", " + std::to_string(pos[1]) + "), please put a good before trying to pick one up!\n";
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
			w->getGoodSpaceHandler()->getGoodSpace(pos)->addGood(*g);
			truck->setCarries(false);
		}
	}
}

void TruckScreen::goBack(int * iF)
{
	*iF = 1;
}

TruckScreen::TruckScreen(WarehouseHandler * wh, UserHandler * uh): Interface(3)
{
	this->wh = wh;
	this->uh = uh;
}

TruckScreen::~TruckScreen()
{
}

std::string TruckScreen::displayOptions()
{
	return "1. Pick up Good.\n2. Put down Good.\n0. Go back.\n";
}

void TruckScreen::runOption(int option, int * interface)
{
	switch (option)
	{
	case 0:
		goBack(interface);
		break;
	case 1:
		pickUp();
		break;
	case 2:
		putDown();
		break;
	}
}
