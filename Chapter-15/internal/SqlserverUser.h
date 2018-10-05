#ifndef SqlserverUser_H
#define SqlserverUser_H

#include "IUser.h"

class SqlserverUser:public IUser
{
public:
	virtual void Insert(User * user) override;
	virtual User * GetUser(int id) override;
};

#endif // !SqlserverUser_H
