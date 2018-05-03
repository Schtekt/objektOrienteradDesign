#ifndef SMALL_ITEM_H
#define SMALL_ITEM_H
#include "Good.h"
class Small_Item : public Good
{
private:
	int size;
public:
	Small_Item(std::string desc, int size);
	~Small_Item();
	int getSize();
};
#endif