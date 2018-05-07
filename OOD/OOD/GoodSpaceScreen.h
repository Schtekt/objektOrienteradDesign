#ifndef GOODSPACESCREEN_H
#define GOODSPACESCREEN_H
#include "Interface.h"
class GoodSpaceScreen : public Interface
{
private:
public:
	bool selectGood();
	bool setTemperature();
	void remove();
};

#endif
