#include <AbstractClass.h>

#include <iostream>

void AbstractClass::TemplateMethod()
{
	this->PrimitiveOperation1();
	this->PrimitiveOperation2();
	std::cout << "³éÏó·½·¨" << std::endl;
}
