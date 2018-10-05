#ifndef SqlServerFactory_H
#define SqlServerFactory_H

#include "IFactory.h"

class SqlServerFactory :public IFactory
{
public:
	virtual IUser * CreateUser() override;
	virtual IDepartment * CreateDepartment() override;
};

#endif // !SqlServerFactory_H
