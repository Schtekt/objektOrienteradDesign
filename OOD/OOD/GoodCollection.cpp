#include "GoodCollection.h"

void GoodCollection::addSmallItem(Small_Item item)
{
	int totSize = 0;
	for (unsigned int i = 0; i < items.size(); i++)
	{
		totSize += items[i].getSize();
	}

	if (totSize + item.getSize() <= 10)
	{
		items.push_back(item);
	}
}

Small_Item GoodCollection::getItem(int id)
{
	return items[id];
}
