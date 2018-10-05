#include "AccessFactory.h"
#include "AccessUser.h"
#include "AccessDepartment.h"

IUser * AccessFactory::CreateUser()
{
	return new AccessUser();
}

IDepartment * AccessFactory::CreateDepartment()
{
	return new AccessDepartment();
}
