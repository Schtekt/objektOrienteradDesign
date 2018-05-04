#ifndef MENU_H
#define MENU_H
#include <string>
#include "Interface.h"

class Menu
{
private:
	int selectedInterface;
	Interface *IF;
public:
	Menu();
	~Menu();
	void runOptions(int options);
	void displayOptions(); //CHANGED: Removed the string options as parameter

};

#endif