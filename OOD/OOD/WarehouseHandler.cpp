#include "WarehouseHandler.h"

WarehouseHandler::WarehouseHandler()
{
	this->selectedWarehouse = -1;
}

WarehouseHandler::~WarehouseHandler()
{
	for (int i = 0; i < vectorWarehouses.size(); i++)
	{
		delete vectorWarehouses[i];
	}
}

Warehouse * WarehouseHandler::getWarehouse(int id)
{
	return vectorWarehouses[id];
}

void WarehouseHandler::addWarehouse(std::string name)
{
	unsigned int size[2];
	size[0] = 10;
	size[1] = 10;
	Warehouse * w = new Warehouse(size, name);
	vectorWarehouses.push_back(w);
}

bool WarehouseHandler::selectWarehouse(int id)
{
	bool res = false;
	if (id >= 0 && id < vectorWarehouses.size())
	{
		selectedWarehouse = id;
		res = true;
	}

	return res;
}

bool WarehouseHandler::deleteWarehouse(int id)
{
	bool res = false;
	if (id >= 0 && id < vectorWarehouses.size())
	{
		if (selectedWarehouse == id)
			selectedWarehouse = -1;
		else if (id < selectedWarehouse)
			selectedWarehouse--;

		delete vectorWarehouses[id];
		vectorWarehouses.erase(vectorWarehouses.begin() + id);

		res = true;

	}

	return res;
}

Warehouse * WarehouseHandler::getCurrentWarehouse()
{
	return vectorWarehouses[selectedWarehouse];
}

int WarehouseHandler::nrOfWarehouses()
{
	return (int)vectorWarehouses.size();
}
