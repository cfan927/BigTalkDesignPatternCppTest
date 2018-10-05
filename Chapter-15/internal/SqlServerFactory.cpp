#include "SqlServerFactory.h"
#include "SqlserverUser.h"
#include "SqlserverDepartment.h"

IUser * SqlServerFactory::CreateUser()
{
	return new SqlserverUser();
}

IDepartment * SqlServerFactory::CreateDepartment()
{
	return new SqlserverDepartment();
}
