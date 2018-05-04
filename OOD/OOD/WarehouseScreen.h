#ifndef WAREHOUSESCREEN_H
#define WAREHOUSESCREEN_H
#include "Interface.h"
class WareHouseScreen: public Interface 
{
private:
public:
	WareHouseScreen();
	bool selectGoodSpace(int pos[2]);
	bool selectTruck(int id);
	bool trackTrucks();
	void addGood();
};

#endif // !WAREHOUSESCREEN_H
