#include "Department.h"

void Department::SetId(int id)
{
	this->m_Id = id;
}

int Department::GetId()
{
	return this->m_Id;
}

void Department::SetDepartmentName(std::string name)
{
	this->m_DepartmentName = name;
}

std::string Department::GetDepartmentName()
{
	return this->m_DepartmentName;
}
