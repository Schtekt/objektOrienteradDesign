#include "TruckHandler.h"

TruckHandler::TruckHandler(GoodSpaceHandler * gsh)
{
	this->gsh = gsh;
	selectedTruck = -1;
}

TruckHandler::~TruckHandler()
{
}

Truck * TruckHandler::getTruck(int id)
{
	return &trucks[id];
}

int TruckHandler::nrOfTrucks()
{
	return (int)trucks.size();
}

bool TruckHandler::addTruck(int pos[2])
{
	bool res = false;
	int size[2];
	size[0] = 0;
	size[1] = 0;
	gsh->getSize(size);
	if (pos[0] >= 0 && pos[1] >= 0 && pos[0] < size[0] && pos[1] < size[1])
	{
		trucks.push_back(Truck(pos));
		res = true;
	}
	return res;
}

bool TruckHandler::editTruck(int pos[2], bool carries, Good g)
{
	int size[2];
	gsh->getSize(size);
	if (pos[0] >= 0 && pos[1] >= 0 && pos[0] < size[0] && pos[1] < size[1])
	{
		trucks[selectedTruck].setPos(pos);
		trucks[selectedTruck].setGood(g);
		trucks[selectedTruck].setCarries(carries);

		if (carries == false)
		{
			putDown();
		}
	}
	return false;
}

bool TruckHandler::deleteTruck()
{
	bool res = false;
	if (selectedTruck >= 0 && selectedTruck < trucks.size())
	{
		res = true;
		trucks.erase(trucks.begin() + selectedTruck);
	}
	return res;
}

void TruckHandler::carryGood()
{
	Good * g = nullptr;
	if (trucks[selectedTruck].getGood(g) == false)
	{
		g = gsh->getCurrentGoodSpace()->getCurrentGood();
		gsh->getCurrentGoodSpace()->removeGood(gsh->getCurrentGoodSpace()->getSelectedPos());
		trucks[selectedTruck].setCarries(true);
		trucks[selectedTruck].setGood(*g);
	}
}

void TruckHandler::putDown()
{
	Good * g = nullptr;
	if (trucks[selectedTruck].getGood(g) == true)
	{
		gsh->getCurrentGoodSpace()->addGood(*g);
		delete g;
		trucks[selectedTruck].setCarries(false);
	}
}

bool TruckHandler::selectTruck(int id)
{
	bool res = false;
	if (id >= 0 && id < trucks.size())
	{
		selectedTruck = id;
		res = true;
	}
	return res;
}

Truck * TruckHandler::getSelectedTruck()
{
	return &trucks[selectedTruck];
}

