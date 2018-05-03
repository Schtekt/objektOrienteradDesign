#ifndef USER_H
#define USER_H
#include <string>

class User
{
private:
	std::string name;
	bool manager;

public:
	User(std::string name, bool isManager);

	std::string getName() const;
	bool isManager() const;
	void setName(std::string newName);
	void changeManager();

};


#endif