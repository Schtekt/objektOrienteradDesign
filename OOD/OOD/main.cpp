#include "GoodSpaceHandler.h"
#include <crtdbg.h>
#include <iostream>
#include "BigBox.h"
#include "Menu.h"
int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	Menu meny;
	int option = 0;
	bool run = true;
	while (run)
	{
		meny.displayOptions();
		std::cin >> option;
		run = meny.runOptions(option);
	}
	return 0;
}