#include "Person.h"

Person::Person()
{
	// TO-DO
}

Person::Person(std::string name)
{
	this->m_Name = name;
}

Person::~Person()
{

}

void Person::Show()
{
	std::cout << "װ���" << m_Name << std::endl;
}

