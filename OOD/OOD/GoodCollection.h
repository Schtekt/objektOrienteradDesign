#ifndef GOODCOLLECTION_H
#define GOODCOLLECTION_H
#include "Small_Item.h"
#include <vector>
class GoodCollection: Good
{
private:
	std::vector<Small_Item> items;
public:
	void addSmallItem(Small_Item item);
	Small_Item getItem(int id);
};
#endif