#include "Pursuit.h"

Pursuit::Pursuit(SchoolGirl *mm)
{
	mm->SetName("Danny");
	this->m_Mm = mm;
}

void Pursuit::GiveDolls()
{
	std::cout << this->m_Mm->GetName() << " ����������" << std::endl;
}

void Pursuit::GiveFlowers()
{
	std::cout << this->m_Mm->GetName() << " �����ʻ�" << std::endl;
}

void Pursuit::GiveChocolate()
{
	std::cout << this->m_Mm->GetName() << " �����ɿ���" << std::endl;
}
