#include "WarehouseScreen.h"

WarehouseScreen::WarehouseScreen(): Interface(4)
{
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
		std::cout << "Please enter an position\n x: ";
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
	std::cout << "Please enter a description for this good!";
	std::cin >> descTmp;
	int pos[2];
	pos[0] = 0;
	pos[1] = 0;
	Good * g = new Good(descTmp);
	wh->getCurrentWarehouse()->getGoodSpace(pos)->addGood(*g);
}

std::string WarehouseScreen::displayOptions()
{
	return "1. Select a goodspace\n 2. Select a Truck\n 3. Track Trucks\n 4. Add a Good to warehouse\n";
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
	}
}


