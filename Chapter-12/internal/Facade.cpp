#include <Facade.h>

#include <iostream>

Facade::Facade()
{
	one = new SubSystemOne();
	two = new SubSystemTwo();
	three = new SubSystemThree();
	four = new SubSystemFour();
}

void Facade::MethodA()
{
	std::cout << "方法组A" << std::endl;
	one->MethodOne();
	two->MethodTwo();
	four->MethodFour();
}

void Facade::MethodB()
{
	std::cout << "方法组B" << std::endl;
	two->MethodTwo();
	three->MethodThree();
}
