#ifndef IFactory_H
#define IFactory_H

#include "IUser.h"
#include "IDepartment.h"

class IFactory
{
public:
	IFactory();

	virtual IUser* CreateUser() = 0;
	virtual IDepartment* CreateDepartment() = 0;
};

#endif // !IFactory_H
