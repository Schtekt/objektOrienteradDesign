#ifndef WAREHOUSEHANDLER_H
#define WAREHOUSEHANDLER_H
#include <string>
#include "Warehouse.h"

class WarehouseHandler
{
private:
	int selectedWarehouse;
	std::vector<Warehouse> vectorWarehouses;
public:
	WarehouseHandler();
	~WarehouseHandler();
	Warehouse* getWarehouse(int id);
	void addWarehouse();
	bool selectWarehouse(int id);
	bool deleteWarehouse(int id);
	Warehouse* getCurrentWarehouse();
};
#endif