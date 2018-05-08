#ifndef GOODSPACESCREEN_H
#define GOODSPACESCREEN_H
#include "Interface.h"
class GoodSpaceScreen : public Interface
{
private:
	void selectGood();
	void setTemperature();
public:
	GoodSpaceScreen(WarehouseHandler * wh, UserHandler * uh);
	~GoodSpaceScreen();
	std::string displayOptions() override;
	void runOption(int option, int * interface) override;
	//REMOVED: Remove() removed and moved to GoodScreen
};

#endif
