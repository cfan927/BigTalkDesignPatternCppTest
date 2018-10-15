#ifndef ConcreteHandler3_H
#define ConcreteHandler3_H

#include <Handler.h>

class ConcreteHandler3 :public Handler
{
public:
	virtual void HandlerRequest(int request) override;
};

#endif // !ConcereHandler_H
