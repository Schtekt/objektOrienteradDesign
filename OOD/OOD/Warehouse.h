#ifndef WAREHOUSE_H
#define WAREHOUSE_H
#include <string>
#include "GoodSpaceHandler.h"
#include "TruckHandler.h"

class Warehouse
{
private:
	std::string name;
public:
	Warehouse(std::string name);
	~Warehouse();
	GoodSpace* getGoodSpace(int size[2]);
	GoodSpaceHandler* getGoodSpaceHandler();
	Truck* getTruck(int id);
	std::string TrackTrucks();
	std::string getName();
};
#endif