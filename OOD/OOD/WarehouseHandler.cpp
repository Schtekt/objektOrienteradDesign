#include "WarehouseHandler.h"

WarehouseHandler::WarehouseHandler()
{
	this->selectedWarehouse = -1;
}

WarehouseHandler::~WarehouseHandler()
{
}

Warehouse * WarehouseHandler::getWarehouse(int id)
{
	return &vectorWarehouses[id];
}

void WarehouseHandler::addWarehouse()
{
	vectorWarehouses.push_back(Warehouse());
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

		vectorWarehouses.erase(vectorWarehouses.begin() + id);

		res = true;

	}

	return res;
}

Warehouse * WarehouseHandler::getCurrentWarehouse()
{
	return &vectorWarehouses[selectedWarehouse];
}
