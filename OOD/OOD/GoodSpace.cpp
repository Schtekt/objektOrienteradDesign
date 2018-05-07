#include "GoodSpace.h"

GoodSpace::GoodSpace(float tempC)
{
	this->tempC = tempC;
}

GoodSpace::~GoodSpace()
{
	//nothing
}

Good * GoodSpace::getCurrentGood()
{
	return goods.top();
}

void GoodSpace::addGood(Good * newGood)
{
	goods.push(newGood);
}

bool GoodSpace::editGood(bool locked)
{
	bool res = true;
	Good* good = goods.top();
	if (good->getLocked() == locked)
		res = false;
	else
		good->switchLocked();
	return res;
}

void GoodSpace::removeGood()
{
	goods.pop();
}

float GoodSpace::getTemp()
{
	return tempC;
}

void GoodSpace::setTemp(float temp)
{
	this->tempC = temp;
}
