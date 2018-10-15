#ifndef ConcreteComponent_H
#define ConcreteComponent_H

#include <Component.h>

class ConcreteComponent :public Component
{
public:
	virtual void Operation() override;
};

#endif // !ConcreteComponent_H
