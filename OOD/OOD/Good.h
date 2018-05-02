#ifndef GOOD_H
#define GOOD_H
#include <string>
class Good
{
private:
	bool locked;
	std::string description;
public:
	Good(std::string desc);
	~Good();
	std::string getDescription();
	bool getLocked();
	void switchLocked();
	void setDescription(std::string desc);
};
#endif