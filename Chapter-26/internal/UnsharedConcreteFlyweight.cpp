#include "UnsharedConcreteFlyweight.h"

#include <iostream>

void UnsharedConcreteFlyweight::Operation(int extrinsicstate)
{
	std::cout << "����������Flyweight�� " << extrinsicstate << std::endl;
}
