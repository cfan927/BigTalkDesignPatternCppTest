#include "ForeignCenter.h"

void ForeignCenter::SetName(std::string name)
{
	this->name = name;
}

std::string ForeignCenter::GetName()
{
	return this->name;
}

void ForeignCenter::ForeignAttack()
{
	std::cout << "�⼮�з�" << name << "����" << std::endl;
}

void ForeignCenter::ForeignDefense()
{
	std::cout << "�⼮�з�" << name << "����" << std::endl;
}
