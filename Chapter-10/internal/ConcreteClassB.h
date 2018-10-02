#ifndef ConcreteClassB_H
#define ConcreteClassB_H

#include <AbstractClass.h>

class ConcreteClassB :public AbstractClass
{
public:
	virtual void PrimitiveOperation1() override;
	virtual void PrimitiveOperation2() override;
};

#endif // !ConcreteClassB_H
