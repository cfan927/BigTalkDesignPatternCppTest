#ifndef ConcreteDecoratorA_H
#define ConcreteDecoratorA_H

#include <string>
#include <Decorator.h>

class ConcreteDecoratorA :public Decorator
{
public:
	virtual void Operation() override;
private:
	std::string m_AddedState;
};

#endif // !ConcreteDecoratorA_H
