#ifndef UnsharedConcreteFlyweight_H
#define UnsharedConcreteFlyweight_H

#include <Flyweight.h>

class UnsharedConcreteFlyweight :public Flyweight
{
public:
	virtual void Operation(int extrinsicstate) override;
};

#endif // !UnsharedConcreteFlyweight_H
