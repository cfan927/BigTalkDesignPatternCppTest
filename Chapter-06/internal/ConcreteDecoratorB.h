#ifndef ConcreteDecoratorB_H
#define ConcreteDecoratorB_H

#include <Decorator.h>

class ConcreteDecoratorB :public Decorator
{
public:
	virtual void Operation() override;
private:
	void AddedBehavior();
};

#endif // !ConcreteDecoratorB_H
