#include "GoodSpaceHandler.h"

GoodSpaceHandler::GoodSpaceHandler(unsigned int size[2])
{
	for (int i = 0; i < size[0]; i++)
	{
		std::vector<GoodSpace*> tmp;
		for (int j = 0; j < size[1]; j++)
		{
			tmp.push_back(new GoodSpace(20.0f));
		}
		goodSpaces.push_back(tmp);
	}
	selectedGoodSpace[0] = 0;
	selectedGoodSpace[1] = 0;
}

GoodSpaceHandler::~GoodSpaceHandler()
{
	for (int i = 0; i < goodSpaces.size(); i++)
	{
		for (int j = 0; j < goodSpaces[i].size(); j++)
		{
			delete goodSpaces[i][j];
		}
	}
}

bool GoodSpaceHandler::select(int pos [2])
{
	bool res = false;
	if (pos[0] >= 0 && pos[1] >= 0 && pos[0] < goodSpaces.size())
	{
		if (pos[1] < goodSpaces[pos[0]].size())
		{
			selectedGoodSpace[0] = pos[0];
			selectedGoodSpace[1] = pos[1];
			res = true;
		}
	}
	return res;
}

GoodSpace * GoodSpaceHandler::getCurrentGoodSpace()
{
	return goodSpaces[selectedGoodSpace[0]][selectedGoodSpace[1]];
}
