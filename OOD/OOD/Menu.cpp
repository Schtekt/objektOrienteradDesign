#include "Menu.h"

Menu::Menu()
{
	this->selectedInterface = 0; //Worldscreen should be assigned to slot 0
}

Menu::~Menu()
{
}

void Menu::runOptions(int options)
{
	IF->runOption(options, &selectedInterface);
}

void Menu::displayOptions()
{
	IF->displayOptions();
}
