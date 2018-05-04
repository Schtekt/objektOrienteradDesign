#include "Warehouse.h"

Warehouse::Warehouse(std::string name)
{
	unsigned int size[2];
	size[0] = 10;
	size[1] = 10;
	this->name = name;
	this->gsh = new GoodSpaceHandler(size);
	this->th = new TruckHandler(gsh);
}

Warehouse::~Warehouse()
{
	delete this->gsh;
	delete this->th;
}

GoodSpace * Warehouse::getGoodSpace(int id[2])
{
	GoodSpace *res = nullptr;
	if (gsh->select(id) == true)
		res = gsh->getCurrentGoodSpace();

	return res;
}

GoodSpaceHandler * Warehouse::getGoodSpaceHandler()
{
	return this->gsh;
}

TruckHandler * Warehouse::getTruckHandler()
{
	return this->th;
}

std::string Warehouse::TrackTrucks()
{
	std::string tmp = " ";
	int nr = th->nrOfTrucks();
	for (int i = 0; i < nr; i++)
	{
		Truck tmpTruck = *th->getTruck(i);
		Good * g = nullptr;
		int pos[2];
		tmpTruck.getPos(pos);

		if (tmpTruck.getGood(g) == true)
			tmp += std::to_string(i) + ", " + "X:" + std::to_string(pos[0]) + " " + "Y:" + std::to_string(pos[1]) + "Good description: " + g->getDescription() + "\n";
		else
			tmp += std::to_string(i) + ", " + "X:" + std::to_string(pos[0]) + " " + "Y:" + std::to_string(pos[1]) + "\n";

	}

	return tmp;
}

std::string Warehouse::getName()
{
	return this->name;
}
