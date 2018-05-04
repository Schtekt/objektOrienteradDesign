#ifndef INTERFACE_H
#define INTERFACE_H
#include "WarehouseHandler.h"
#include "UserHandler.h"
class Interface
{
private:
	int nrOfOptions;
	WarehouseHandler * wh;
	UserHandler * uh;
	void virtual goBack(int * Interface) = 0;
public:
	Interface(int nrOfOptions);
	~Interface();
	std::string virtual displayOptions() = 0;
	void virtual runOption(int option, int * interface) = 0;
};

#endif