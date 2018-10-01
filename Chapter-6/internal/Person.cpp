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
	std::cout << "×°°çµÄ" << m_Name << std::endl;
}

