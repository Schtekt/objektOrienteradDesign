#include "Warehouse.h"

Warehouse::Warehouse(std::string name)
{
	this->name = name;
}

Warehouse::~Warehouse()
{
}

GoodSpace * Warehouse::getGoodSpace(int size[2])
{
	return nullptr;
}

GoodSpaceHandler * Warehouse::getGoodSpaceHandler()
{
	return nullptr;
}

Truck * Warehouse::getTruck(int id)
{
	return nullptr;
}

std::string Warehouse::TrackTrucks()
{
	return std::string();
}

std::string Warehouse::getName()
{
	return std::string();
}
