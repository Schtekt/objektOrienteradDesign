#include "User.h"

User::User(std::string name, bool isManager)
{
	this->name = name;
	manager = isManager;
}

std::string User::getName() const
{
	return name;
}

bool User::isManager() const
{
	return manager;
}

void User::setName(std::string newName)
{
	name = newName;
}

void User::changeManager()
{
	if (manager) {
		manager = false;
	}
	else {
		manager = true;
	}
}
