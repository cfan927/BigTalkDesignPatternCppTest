#ifndef ConcreteColleague1_H
#define ConcreteColleague1_H

#include <Colleague.h>
#include <Mediator.h>

class ConcreteColleague1 :public Colleague
{
public:
	ConcreteColleague1(Mediator *mediator);
	void Send(std::string message);
	void Notify(std::string message);
};

#endif // !ConcreteColleague1_H
