#include "GoodSpaceHandler.h"
#include <crtdbg.h>
#include <iostream>
#include "BigBox.h"

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	unsigned int* i = new unsigned int[2];
	i[0] = 1;
	i[1] = 1;
	GoodSpaceHandler good(i);

	Good box("A Box");

	good.getCurrentGoodSpace()->addGood(box);

	std::cout << good.getCurrentGoodSpace()->getGood(0)->getDescription();

	BigBox bBox("Bigger Box", 5.0f, 5.1f, true);

	good.getCurrentGoodSpace()->addGood(bBox);

	std::vector<std::string> str;
	good.getCurrentGoodSpace()->getContent(str);

	for (int i = 0; i < str.size(); i++) {
		std::cout << str[i] << std::endl;
	}

	getchar();

	delete i;

	return 0;
}