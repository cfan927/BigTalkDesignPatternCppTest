#ifndef AccessUser_H
#define AccessUser_H

#include "IUser.h"

class AccessUser :public IUser
{
public:
	virtual void Insert(User * user) override;
	virtual User * GetUser(int id) override;
};

#endif // !AccessUser_H
