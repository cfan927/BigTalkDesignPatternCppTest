#include <ConcreteDecoratorA.h>

#include <iostream>

void ConcreteDecoratorA::Operation()
{
	Decorator::Operation();
	this->m_AddedState = "New State";
	std::cout << "具体装饰对象A的操作" << std::endl;
}
