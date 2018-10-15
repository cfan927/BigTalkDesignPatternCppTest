#ifndef Mediator_H
#define Mediator_H

#include <iostream>

#include <Colleague.h>

class Mediator
{
public:
	virtual void Send(std::string message, Colleague *colleague) = 0;
};

#endif // !Mediator_H
