#ifndef INTERFACE_H
#define INTERFACE_H
#include "WarehouseHandler.h"
#include "UserHandler.h"
#include <iostream>

class Interface
{
protected:
	int nrOfOptions;
	WarehouseHandler * wh;
	UserHandler * uh;
	//void goBack(int * iF);
public:
	Interface(int nrOfOptions);
	~Interface();
	virtual std::string displayOptions() = 0;
	virtual void runOption(int option, int * interface) = 0;
};

#endif
