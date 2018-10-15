#include "ConcreteFlyweight.h"

#include <iostream>

void ConcreteFlyweight::Operation(int extrinsicstate)
{
	std::cout << "¾ßÌåFlyweight£º " << extrinsicstate << std::endl;
}
