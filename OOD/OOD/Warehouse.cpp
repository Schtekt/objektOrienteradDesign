#include "Warehouse.h"

Warehouse::Warehouse(unsigned int size[2], std::string name) :gsh(size), th(&gsh)
{
	this->name = name;
}

Warehouse::~Warehouse()
{
}

GoodSpace * Warehouse::getGoodSpace(int id[2])
{
	GoodSpace *res = nullptr;
	if (gsh.select(id) == true)
		res = gsh.getCurrentGoodSpace();

	return res;
}

GoodSpaceHandler * Warehouse::getGoodSpaceHandler()
{
	return &this->gsh;
}

TruckHandler * Warehouse::getTruckHandler()
{
	return &this->th;
}

std::string Warehouse::TrackTrucks()
{
	std::string tmp = "";
	int nr = th.nrOfTrucks();
	if (nr > 0)
	{
		tmp += "In this warehouse we got the following truck(s):\n";
	}
	else
	{
		tmp += "This warehouse has no trucks!\n";
	}
	for (int i = 0; i < nr; i++)
	{
		Truck tmpTruck = *th.getTruck(i);
		Good * g = nullptr;
		int pos[2];
		tmpTruck.getPos(pos);

		if (tmpTruck.getGood(g) == true)
			tmp += "id: " + std::to_string(i) + ", " + "X:" + std::to_string(pos[0]) + " " + "Y:" + std::to_string(pos[1]) + "Good description: " + g->getDescription() + "\n";
		else
			tmp += "id: " + std::to_string(i) + ", " + "X:" + std::to_string(pos[0]) + " " + "Y:" + std::to_string(pos[1]) + "\n";

	}

	return tmp;
}

std::string Warehouse::getName()
{
	return this->name;
}
