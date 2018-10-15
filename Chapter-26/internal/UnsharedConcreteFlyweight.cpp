#include "UnsharedConcreteFlyweight.h"

#include <iostream>

void UnsharedConcreteFlyweight::Operation(int extrinsicstate)
{
	std::cout << "不共享具体的Flyweight： " << extrinsicstate << std::endl;
}
