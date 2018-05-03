#include "Small_Item.h"

Small_Item::Small_Item(std::string desc, int size): Good(desc)
{
	this->size = size;
}

Small_Item::~Small_Item()
{
	//Nothing
}

int Small_Item::getSize()
{
	return size;
}
