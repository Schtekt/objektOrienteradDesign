#include "WarehouseHandler.h"

WarehouseHandler::WarehouseHandler(int selectedWarehouse)
{
	this->selectedWarehouse = selectedWarehouse;
}

WarehouseHandler::~WarehouseHandler()
{
}

Warehouse * WarehouseHandler::getWarehouse(int id)
{
	return nullptr;
}

void WarehouseHandler::addWarehouse()
{
}

bool WarehouseHandler::selectedWarehouse(int id)
{
	return false;
}

bool WarehouseHandler::deleteWarehouse(int id)
{
	return false;
}

Warehouse * WarehouseHandler::getCurrentWarehouse()
{
	return nullptr;
}
