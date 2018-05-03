#include "UserHandler.h"

UserHandler::UserHandler()
{
}

void UserHandler::addUser(std::string name, bool manager)
{
	User temp(name, manager);
	users.push_back(temp);
}

void UserHandler::removeUser(int id)
{	
	users.erase(users.begin() + id);
}

User UserHandler::getSelectedUser() const
{
	return users.at(selectedUser);
}

void UserHandler::selectUser(int id)
{
	selectedUser = id;
}

std::string UserHandler::getUsersString()
{
	std::string list;

	for (int i = 0; i < users.size(); i++) {
		list += "Name: " + users.at(i).getName() + " IsManager?: ";
		if (users.at(i).isManager()) {
			list += "Yes";
		}
		else {
			list += "No ";
		}
		list += " ID: " + std::to_string(i) + "\n";
	}

	return list;
}
