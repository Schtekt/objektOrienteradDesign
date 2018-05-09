#ifndef WAREHOUSEHANDLER_H
#define WAREHOUSEHANDLER_H
#include <string>
#include "Warehouse.h"

class WarehouseHandler
{
private:
	int selectedWarehouse;
	std::vector<Warehouse*> vectorWarehouses;
public:
	WarehouseHandler();
	~WarehouseHandler();
	Warehouse* getWarehouse(int id);
	void addWarehouse(std::string name);
	bool selectWarehouse(int id);
	bool deleteWarehouse(int id);
	Warehouse* getCurrentWarehouse();
	//CHANGE! added a function to determine max nr of warehouses
	int nrOfWarehouses();
};
#endif