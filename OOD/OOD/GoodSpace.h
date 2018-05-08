#ifndef GOODSPACE_H
#define GOODSPACE_H
#include "Good.h"
#include <vector>
class GoodSpace
{
private:
	float tempC;
	// CHANGE! added variable selectedGood
	int selectedGood;
	std::vector<Good> goods;
public:
	GoodSpace(float tempC);
	~GoodSpace();
	// CHANGE! we'll be making good objects into pointers instead so that we can use polymorphism.
	Good * getGood(int index);
	void addGood(Good newGood);
	bool editGood(int index, bool locked);
	void removeGood(int index);
	// CHANGE! Added a get and set function for temperature!
	float getTemp();
	void setTemp(float temp);

	void getContent(std::vector<std::string> &arr);
	// CHANGE! added function getCurrentGood
	Good * getCurrentGood();
	bool selectGood(int id);
	int getSelectedPos();
	int getSize();
};
#endif
