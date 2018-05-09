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
	//CHANGE! because of memory issues, handlers are also put into menu...
	WarehouseHandler * wh;
	UserHandler * uh;
public:
	Menu();
	~Menu();
	//CHANGE! runoption is made into a bool to check if the program should exit.
	bool runOptions(int options);
	void displayOptions(); //CHANGED: Removed the string options as parameter

};

#endif