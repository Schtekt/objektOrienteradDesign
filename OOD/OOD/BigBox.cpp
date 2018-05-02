#include "BigBox.h"

BigBox::BigBox(std::string desc, float tempCMin, float tempCMax, bool hard): Good(desc)
{
	tempMin = tempCMin;
	tempMax = tempCMax;
	this->hard = hard;
}

BigBox::~BigBox()
{
	//nothing
}

float BigBox::getTempMax()
{
	return tempMax;
}

float BigBox::getTempMin()
{
	return tempMin;
}

bool BigBox::isHard()
{
	return hard;
}

void BigBox::setTempMax(float tempC)
{
	tempMax = tempC;
}

void BigBox::setTempMin(float tempC)
{
	tempMin = tempC;
}

void BigBox::changeHard()
{
	hard = !hard;
}
