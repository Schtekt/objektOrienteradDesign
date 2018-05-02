#ifndef GOODSPACE_H
#define GOODSPACE_H
#include "Good.h"
#include <stack>
class GoodSpace
{
private:
	float tempC;
	std::stack<Good*> goods;
public:
	GoodSpace(float tempC);
	~GoodSpace();
	// CHANGE! we'll be making good objects into pointers instead so that we can use polymorphism.
	Good * getCurrentGood();
	void addGood(Good * newGood);
	bool editGood(bool locked);
	void removeGood();
};
#endif
