#include "AccessUser.h"

#include <iostream>

void AccessUser::Insert(User * user)
{
	std::cout << "在Access中给User表增加一条记录" << std::endl;
}

User * AccessUser::GetUser(int id)
{
	std::cout << "在Access中根据ID得到User表一条记录" << std::endl;
	return nullptr;
}
