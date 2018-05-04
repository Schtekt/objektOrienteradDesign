#ifndef TRUCK_H
#define TRUCK_H
#include "Good.h"
class Truck
{
private:
	int pos[2];
	bool carries;
	Good * good;
public:
	Truck(int pos[2]);
	~Truck();
	// CHANGES! again, we use good pointers instead of pure objects.
	void getPos(int pos[2]);
	//CHANGE! getGood is made into a bool instead where the wanted value is pu inside the inserted pointer instead
	// this is to avoid using exceptions.
	bool getGood(Good * returnValue);
	void setPos(int pos[2]);
	//CHANGE! made setGood into a bool, if a truck already carries a good then that good should not be able to be replaced untill it is put down.
	bool setGood(Good * good);
	//CHANGE! added function to set if the truck carries a good.
	void setCarries(bool carry);
};

#endif
