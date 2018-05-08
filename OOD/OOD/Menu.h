#ifndef MENU_H
#define MENU_H
#include <string>
#include "WorldScreen.h"
#include "WarehouseScreen.h"
#include "GoodSpaceScreen.h"
#include "TruckScreen.h"
#include "GoodScreen.h"

class Menu
{
private:
	int selectedInterface;
	std::vector<Interface *> iF;
public:
	Menu();
	~Menu();
	void runOptions(int options);
	void displayOptions(); //CHANGED: Removed the string options as parameter

};

#endif