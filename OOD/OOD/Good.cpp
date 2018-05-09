#include "Good.h"

Good::Good(std::string desc)
{
	locked = false;
	description = desc;
}

Good::~Good()
{
	// nothing
}

std::string Good::getDescription()
{
	return description;
}

bool Good::getLocked()
{
	return locked;
}

void Good::switchLocked()
{
	locked = !locked;
}

void Good::setDescription(std::string desc)
{
	description = desc;
}

Good Good::operator=(Good Obj) 
{
	//SPAJ! satt i en timme o fattade inte vrf description eller locked ändrades...

	//Obj.description = this->description;
	//Obj.locked = this->locked;

	this->description = Obj.description;
	this->locked = Obj.locked;
	return *this;
}
