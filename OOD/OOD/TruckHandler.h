#ifndef TRUCKHANDLER_H
#define TRUCKHANDLER_H

#include "Truck.h"
#include "GoodSpaceHandler.h"

class TruckHandler
{
private:
	GoodSpaceHandler * gsh;
	int selectedTruck;
	std::vector<Truck> trucks;
public:
	TruckHandler(GoodSpaceHandler * gsh);
	~TruckHandler();
	bool addTruck(int pos[2]);
	bool editTruck(int pos[2], bool carries, Good * g);
	bool deleteTruck();
	void carryGood();
	void putDown();
};
#endif