#ifndef GOODSPACEHANDLER_H
#define GOODSPACEHANDLER_H
#include "GoodSpace.h"
#include <vector>

class GoodSpaceHandler
{
private:
	int selectedGoodSpace [2];
	std::vector<std::vector<GoodSpace*>> goodSpaces;
public:
	GoodSpaceHandler(unsigned int size[2]);
	~GoodSpaceHandler();
	// CHANGE! to edit a goodspace we need to send back a pointer instead. Added a getSize...
	bool select(int pos[2]);
	GoodSpace * getCurrentGoodSpace();
	//CHANGE! added a function getGoodSpace.
	GoodSpace * getGoodSpace(int pos[2]);
	void getSize(int * size);
	//CHANGE! added function to get the position of the selected good space.
	void getSelectedPos(int pos[2]);
};
#endif