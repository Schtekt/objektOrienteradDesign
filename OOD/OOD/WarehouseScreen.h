#ifndef WAREHOUSESCREEN_H
#define WAREHOUSESCREEN_H
#include "Interface.h"
#include <stdio.h>
class WareHouseScreen: public Interface 
{
private:
public:
	WareHouseScreen();
	bool selectGoodSpace();
	bool selectTruck();
	bool trackTrucks();
	void addGood();
};

#endif // !WAREHOUSESCREEN_H
