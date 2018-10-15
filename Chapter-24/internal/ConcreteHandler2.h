#ifndef ConcreteHandler2_H
#define ConcreteHandler2_H

#include <Handler.h>

class ConcreteHandler2 :public Handler
{
public:
	virtual void HandlerRequest(int request) override;
};

#endif // !ConcereHandler_H
