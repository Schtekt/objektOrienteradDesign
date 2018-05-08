#include "GoodSpace.h"

GoodSpace::GoodSpace(float tempC)
{
	this->tempC = tempC;
}

GoodSpace::~GoodSpace()
{
	//nothing
}

Good * GoodSpace::getGood(int index)
{
	return &goods[index];
}

void GoodSpace::addGood(Good newGood)
{
	goods.push_back(newGood);
}

bool GoodSpace::editGood(int index, bool locked)
{
	bool res = true;

	if (goods[index].getLocked() == locked)
		res = false;
	else
		goods[index].switchLocked();
	return res;
}

void GoodSpace::removeGood(int index)
{
	goods.erase(goods.begin() + index);
}

float GoodSpace::getTemp()
{
	return tempC;
}

void GoodSpace::setTemp(float temp)
{
	this->tempC = temp;
}

void GoodSpace::getContent(std::vector<std::string>& arr)
{
	for (int i = 0; i < goods.size(); i++) {
		arr.push_back("Index: " + std::to_string(i) + " Description: " + goods[i].getDescription());
	}
}

Good * GoodSpace::getCurrentGood()
{
	return &goods[selectedGood];
}

bool GoodSpace::selectGood(int id)
{
	bool res = false;
	if (id >= 0 && id < goods.size())
	{
		selectedGood = id;
		res = true;
	}
	return res;
}

int GoodSpace::getSelectedPos()
{
	return selectedGood;
}

int GoodSpace::getSize()
{
	return goods.size();
}
