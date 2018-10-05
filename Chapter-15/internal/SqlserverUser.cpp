#include "SqlserverUser.h"

#include <iostream>

void SqlserverUser::Insert(User * user)
{
	std::cout << "在SQL Server中给User表增加一条记录" << std::endl;
}

User * SqlserverUser::GetUser(int id)
{
	std::cout << "在SQL Server中根据ID得到User表一条记录" << std::endl;
	return nullptr;
}
