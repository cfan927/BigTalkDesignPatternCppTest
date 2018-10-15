#ifndef ConcreteColleague2_H
#define ConcreteColleague2_H

#include <Colleague.h>
#include <Mediator.h>

class ConcreteColleague2 :public Colleague
{
public:
	ConcreteColleague2(Mediator *mediator);
	void Send(std::string message);
	void Notify(std::string message);
};

#endif // !ConcreteColleague2_H
