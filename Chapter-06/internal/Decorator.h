#ifndef Decorator_H
#define Decorator_H

#include <Component.h>

class Decorator :public Component
{
public:
	void SetComponent(Component *component);
	virtual void Operation() override;
protected:
	Component *m_Component;
};

#endif // !Decorator_H
