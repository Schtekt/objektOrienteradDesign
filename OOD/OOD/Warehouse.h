#ifndef WAREHOUSE_H
#define WAREHOUSE_H
#include <string>
#include "GoodSpaceHandler.h"
#include "TruckHandler.h"

class Warehouse
{
private:
	std::string name;
	GoodSpaceHandler * gsh;
	TruckHandler * th;
public:
	Warehouse(std::string name = "");
	~Warehouse();
	GoodSpace* getGoodSpace(int id[2]);
	GoodSpaceHandler* getGoodSpaceHandler();
	TruckHandler* getTruckHandler();
	//CHANGED: Truck changed to TruckHandler 
	std::string TrackTrucks();
	std::string getName();
};
#endif