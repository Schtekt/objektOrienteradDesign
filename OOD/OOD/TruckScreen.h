#ifndef TRUCKSCREEN_H
#define TRUCKSCREEN_H
#include "Interface.h"
class TruckScreen : public Interface
{
private:
	// CHANGE! movegood happens instantly instead of moving trucks in real time.
	//void moveGood();
	// CHANGE! movegood is replaced by two functions, pick up and put down.
	void pickUp();
	void putDown();
public:
	TruckScreen();
	~TruckScreen();
	std::string displayOptions() override;
	void runOption(int option, int * interface) override;
};
#endif