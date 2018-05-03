#ifndef USERHANDLER_H
#define USERHANDLER_H
#include "User.h"
#include <vector>

class UserHandler
{
private:
	int selectedUser;
	std::vector<User> users;

public:
	UserHandler();

	void addUser(std::string name, bool manager);
	void removeUser(int id);

	User getSelectedUser() const;
	void selectUser(int id);

	std::string getUsersString();
};

#endif // !USERHANDLER_H
