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
