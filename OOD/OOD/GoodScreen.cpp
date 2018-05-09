#include "GoodScreen.h"

bool GoodScreen::setMaxTemp()
{
	bool res = true;
	float maxTempC;

	std::cout << "Please enter a temperature (in celcius) that you would like to set this good's max temperature to:\n";
	std::cin >> maxTempC;

	if (maxTempC < ((BigBox*)wh->getCurrentWarehouse()->getGoodSpaceHandler()->getCurrentGoodSpace()->getCurrentGood())->getTempMin())
	{
		res = false;
		std::cout << "Error! your max temperature for this good cannot be less than its min temperature!\n";
	}
	
	if (maxTempC < wh->getCurrentWarehouse()->getGoodSpaceHandler()->getCurrentGoodSpace()->getTemp())
	{
		res = false;
		std::cout << "Error! Your max temperature cannot be less than the goodSpaces current temperature!\n";
	}

	return res;
}

bool GoodScreen::setMinTemp()
{
	bool res = true;
	float minTempC;

	std::cout << "Please enter a temperature (in celcius) that you would like to set this good's min temperature to:\n";
	std::cin >> minTempC;

	if (minTempC > ((BigBox*)wh->getCurrentWarehouse()->getGoodSpaceHandler()->getCurrentGoodSpace()->getCurrentGood())->getTempMin())
	{
		res = false;
		std::cout << "Error! your min temperature for this good cannot be less than its max temperature!\n";
	}

	if (minTempC > wh->getCurrentWarehouse()->getGoodSpaceHandler()->getCurrentGoodSpace()->getTemp())
	{
		res = false;
		std::cout << "Error! Your min temperature cannot be higher than the goodSpaces current temperature!\n";
	}

	return res;
}

void GoodScreen::lockUnlock()
{
	bool locked = wh->getCurrentWarehouse()->getGoodSpaceHandler()->getCurrentGoodSpace()->getCurrentGood()->getLocked();
	if (locked)
	{
		wh->getCurrentWarehouse()->getGoodSpaceHandler()->getCurrentGoodSpace()->getCurrentGood()->switchLocked();
		std::cout << "The box is now unlocked";
	}
	else
	{
		wh->getCurrentWarehouse()->getGoodSpaceHandler()->getCurrentGoodSpace()->getCurrentGood()->switchLocked();
		std::cout << "the box is now locked ";
	}
}

void GoodScreen::setDescription()
{
	std::string desc;
	std::cout << "Please enter the new description:\n";
	std::cin >> desc;

	wh->getCurrentWarehouse()->getGoodSpaceHandler()->getCurrentGoodSpace()->getCurrentGood()->setDescription(desc);
}

GoodScreen::GoodScreen(WarehouseHandler * wh, UserHandler * uh):Interface(5)
{
	this->wh = wh;
	this->uh = uh;
}

GoodScreen::~GoodScreen()
{
}

std::string GoodScreen::displayOptions()
{
	return "1. Set maximum temperature\n2. Set minimum temperature\n3. Lock/Unlock good\n4. Set good description\n";
}

void GoodScreen::runOption(int option, int * interface)
{
	switch (option)
	{
	case 1:
		setMaxTemp();
		break;
	case 2:
		setMinTemp();
		break;
	case 3:
		lockUnlock();
		break;
	case 4:
		setDescription();
		break;
	}

}
