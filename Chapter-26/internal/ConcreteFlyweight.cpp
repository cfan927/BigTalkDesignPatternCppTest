#include "ConcreteFlyweight.h"

#include <iostream>

void ConcreteFlyweight::Operation(int extrinsicstate)
{
	std::cout << "����Flyweight�� " << extrinsicstate << std::endl;
}
