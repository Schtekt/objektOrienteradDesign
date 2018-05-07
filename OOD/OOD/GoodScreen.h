#ifndef GOODSCREEN_H
#define GOODSCREEN_H
#include "Interface.h"
#include "BigBox.h"
class GoodScreen: public Interface
{
private:
	bool setMaxTemp();
	bool setMinTemp();
	void lockUnlock();
	void setDescription();
public:
};
#endif
