#include "User.h"

void User::SetId(int id)
{
	this->m_Id = id;
}

int User::GetId()
{
	return this->m_Id;
}

void User::SetName(std::string name)
{
	this->m_Name = name;
}

std::string User::GetName()
{
	return this->m_Name;
}
