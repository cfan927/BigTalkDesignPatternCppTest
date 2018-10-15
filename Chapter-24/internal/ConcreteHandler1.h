#ifndef ConcreteHandler1_H
#define ConcreteHandler1_H

#include <Handler.h>

class ConcreteHandler1 :public Handler
{
public:
	virtual void HandlerRequest(int request) override;
};

#endif // !ConcreteHandler1_H
