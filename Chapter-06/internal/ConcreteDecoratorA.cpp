#include <ConcreteDecoratorA.h>

#include <iostream>

void ConcreteDecoratorA::Operation()
{
	Decorator::Operation();
	this->m_AddedState = "New State";
	std::cout << "����װ�ζ���A�Ĳ���" << std::endl;
}
