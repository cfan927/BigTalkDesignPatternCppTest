#ifndef ConcreteFlyweight_H
#define ConcreteFlyweight_H

#include <Flyweight.h>

class ConcreteFlyweight :public Flyweight
{
public:
	virtual void Operation(int extrinsicstate) override;
};

#endif // !ConcreteFlyweight_H
