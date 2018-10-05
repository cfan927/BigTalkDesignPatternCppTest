#ifndef AccessFactory_H
#define AccessFactory_H

#include "IFactory.h"

class AccessFactory :public IFactory
{
public:
	virtual IUser * CreateUser() override;
	virtual IDepartment * CreateDepartment() override;
};

#endif // !AccessFactory_H
