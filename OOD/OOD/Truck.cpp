#include "Truck.h"

Truck::Truck(int pos[2]):good("Nothing")
{
	this->pos[0] = pos[0];
	this->pos[1] = pos[1];
	carries = false;
}

Truck::Truck():good("Nothing")
{
	this->pos[0] = 0;
	this->pos[1] = 0;
	carries = false;
}

Truck::~Truck()
{
}

void Truck::getPos(int pos[2])
{
	pos[0] = this->pos[0];
	pos[1] = this->pos[1];
}

bool Truck::getGood(Good * returnValue)
{
	if (carries)
	{
		*returnValue = good;
	}
	return carries;
}

void Truck::setPos(int pos[2])
{
	this->pos[0] = pos[0];
	this->pos[1] = pos[1];
}

bool Truck::setGood(Good good)
{
	bool res = false;
	if (carries == false)
	{
		this->good.operator=(good);
		carries = true;
		res = true;
	}
	return res;
}

void Truck::setCarries(bool carry)
{
	carries = carry;
}
