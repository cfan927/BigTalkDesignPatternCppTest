#ifndef ConcreteClassA_H
#define ConcreteClassA_H

#include <AbstractClass.h>

class ConcreteClassA :public AbstractClass
{
public:
	virtual void PrimitiveOperation1() override;
	virtual void PrimitiveOperation2() override;
};

#endif // !ConcreteClassA_H
