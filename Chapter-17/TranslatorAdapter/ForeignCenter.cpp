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
	std::cout << "外籍中锋" << name << "进攻" << std::endl;
}

void ForeignCenter::ForeignDefense()
{
	std::cout << "外籍中锋" << name << "防守" << std::endl;
}
