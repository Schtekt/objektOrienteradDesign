#ifndef WORLDSCREEN_H
#define WORLDSCREEN_H
#include "Interface.h"

class WorldScreen : public Interface
{
public:
	std::string displayOptions() override;
	void runOption(int option, int * interface) override;
	WorldScreen();
	~WorldScreen();
private:
	void addWarehouse();
	// CHANGE! the ID will be asked for inside the function instead.
	void selectWarehouse();
	void removeWarehouse();
};

#endif
