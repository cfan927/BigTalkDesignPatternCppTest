#include "ConcreteDecoratorB.h"

#include <iostream>

void ConcreteDecoratorB::Operation()
{
	Decorator::Operation();
	this->AddedBehavior();
	std::cout << "具体装饰对象B的操作" << std::endl;
}

void ConcreteDecoratorB::AddedBehavior()
{
	// TO-DO
}
