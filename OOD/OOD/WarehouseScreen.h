#ifndef WAREHOUSESCREEN_H
#define WAREHOUSESCREEN_H
#include "Interface.h"
class WareHouseScreen: public Interface 
{
private:
	bool selectGoodSpace();
	bool selectTruck();
	bool trackTrucks();
	void addGood();
public:
	WareHouseScreen();

	std::string displayOptions() override;
	void runOption(int option, int * interface) override;
};

#endif
