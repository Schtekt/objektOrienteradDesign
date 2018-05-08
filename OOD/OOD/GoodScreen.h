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
	GoodScreen();
	~GoodScreen();
	std::string displayOptions() override;
	void runOption(int option, int * interface) override;
};
#endif
