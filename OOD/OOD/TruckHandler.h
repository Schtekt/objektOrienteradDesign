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
	TruckHandler(GoodSpaceHandler * gsh = nullptr);
	~TruckHandler();
	//CHANGE! added a function "getTruck".
	Truck * getTruck(int id);
	//CHANGE! added function for nrOf.
	int nrOfTrucks();
	bool addTruck(int pos[2]);
	bool editTruck(int pos[2], bool carries, Good g);
	bool deleteTruck();
	void carryGood();
	void putDown();
	//CHANGE! Added function selectTruck
	bool selectTruck(int id);
	//CHANGE! Added function getSelectedTruck
	Truck * getSelectedTruck();
	//CHANGE! Added function to set gsh
	void setGSH(GoodSpaceHandler * gsh);
};
#endif