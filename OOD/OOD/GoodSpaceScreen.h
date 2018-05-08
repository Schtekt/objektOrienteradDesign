#ifndef GOODSPACESCREEN_H
#define GOODSPACESCREEN_H
#include "Interface.h"
class GoodSpaceScreen : public Interface
{
private:
public:
	void selectGood();
	void setTemperature();
	//REMOVED: Remove() removed and moved to GoodScreen
};

#endif
