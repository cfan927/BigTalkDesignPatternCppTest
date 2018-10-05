#ifndef IUser_H
#define IUser_H

#include "User.h"

class IUser
{
public:
	IUser();

	virtual void Insert(User *user) = 0;
	virtual User* GetUser(int id) = 0;
};

#endif // !IFactory_H
