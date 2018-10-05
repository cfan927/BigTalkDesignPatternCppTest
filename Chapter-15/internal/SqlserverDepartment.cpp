#include "SqlserverDepartment.h"

#include <iostream>

void SqlserverDepartment::Insert(Department * department)
{
	std::cout << "在SQL Server中给Department表增加一条记录" << std::endl;
}

Department * SqlserverDepartment::GetDepartment(int id)
{
	std::cout << "在SQL Server中根据ID得到Department表一条记录" << std::endl;
	return nullptr;
}
