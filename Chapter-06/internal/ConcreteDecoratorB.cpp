#include "ConcreteDecoratorB.h"

#include <iostream>

void ConcreteDecoratorB::Operation()
{
	Decorator::Operation();
	this->AddedBehavior();
	std::cout << "����װ�ζ���B�Ĳ���" << std::endl;
}

void ConcreteDecoratorB::AddedBehavior()
{
	// TO-DO
}
