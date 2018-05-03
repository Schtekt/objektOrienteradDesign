#ifndef WAREHOUSEHANDLER_H
#define WAREHOUSEHANDLER_H
#include <string>
#include "Warehouse.h"

class WarehouseHandler
{
private:
	int selectedWarehouse;
public:
	WarehouseHandler();
	~WarehouseHandler();
	Warehouse* getWarehouse(int id);
	void addWarehouse();
	bool getSelectedWarehouse(int id);
	bool deleteWarehouse(int id);
	Warehouse* getCurrentWarehouse();
};
#endif