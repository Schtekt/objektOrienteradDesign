#include "WarehouseScreen.h"

WarehouseScreen::WarehouseScreen(WarehouseHandler * wh, UserHandler * uh): Interface(4)
{
	this->wh = wh;
	this->uh = uh;
}

WarehouseScreen::~WarehouseScreen()
{
}

bool WarehouseScreen::selectGoodSpace()
{
	bool res = false;
	try
	{
		int pos[2];
		std::cout << "Please enter a position\n x: ";
		std::cin >> pos[0];
		std::cout << "y: ";
		std::cin >> pos[1];

		wh->getCurrentWarehouse()->getGoodSpaceHandler()->select(pos);
		res = true;
	}
	catch (std::string e)
	{
		std::cout << "Error! someting went wrong!";
	}

	return res;
}

bool WarehouseScreen::selectTruck()
{
	bool res = false;
	try
	{
		int id;

		while (res == false)
		{
			std::cout << "Please enter a truck ID you wish to select: ";
			std::cin >> id;

			res = wh->getCurrentWarehouse()->getTruckHandler()->selectTruck(id);

			if (res == false)
			{
				std::cout << "Please enter a valid id!\n";
			}
		}
	}
	catch (std::string e)
	{
		std::cout << "Something went wrong!";
	}
	return res;
}

bool WarehouseScreen::trackTrucks()
{
	std::string tmp;
	tmp = wh->getCurrentWarehouse()->TrackTrucks();
	std::cout << tmp;
	return true;
}

void WarehouseScreen::addGood()
{
	std::string descTmp;
	std::cout << "Please enter a description for this good: ";
	std::cin >> descTmp;
	int pos[2];
	pos[0] = 0;
	pos[1] = 0;
	Good * g = new Good(descTmp);
	wh->getCurrentWarehouse()->getGoodSpace(pos)->addGood(*g);
	std::cout << "The good has been added to the position 0,0";
}

void WarehouseScreen::addTruck()
{
	int pos[2];
	pos[0] = 0;
	pos[1] = 1;
	wh->getCurrentWarehouse()->getTruckHandler()->addTruck(pos);
	std::cout << "A truck has been added at the position 0,0\n";
}

std::string WarehouseScreen::displayOptions()
{
	return "1. Select a goodspace\n2. Select a Truck\n3. Track Trucks\n4. Add a Good to warehouse\n5. Add a Truck to warehouse";
}

void WarehouseScreen::runOption(int option, int * iF)
{
	switch (option)
	{
	case 1:
		selectGoodSpace();
		iF[0] = 3;
		break;
	case 2:
		selectTruck();
		iF[0] = 2;
		break;
	case 3:
		trackTrucks();
		break;
	case 4:
		addGood();
		break;
	case 5:
		addTruck();
		break;
	}
}


