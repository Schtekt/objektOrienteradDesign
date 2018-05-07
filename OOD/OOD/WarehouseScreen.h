#ifndef WAREHOUSESCREEN_H
#define WAREHOUSESCREEN_H
#include "Interface.h"
class WareHouseScreen: public Interface 
{
private:
public:
	WareHouseScreen();
	bool selectGoodSpace();
	bool selectTruck();
	bool trackTrucks();
	void addGood();
	std::string displayOptions() override;
	void runOption(int option, int * interface) override;
};

#endif
