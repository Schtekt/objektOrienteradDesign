#ifndef WAREHOUSESCREEN_H
#define WAREHOUSESCREEN_H
#include "Interface.h"
class WarehouseScreen: public Interface 
{
private:
	bool selectGoodSpace();
	bool selectTruck();
	bool trackTrucks();
	void addGood();
	//CHANGE! added a function for adding trucks.
	void addTruck();
public:
	WarehouseScreen(WarehouseHandler * wh, UserHandler * uh);
	~WarehouseScreen();
	std::string displayOptions() override;
	void runOption(int option, int * interface) override;
};

#endif
