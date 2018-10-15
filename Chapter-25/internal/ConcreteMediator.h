#ifndef ConcreteMediator_H
#define ConcreteMediator_H

#include <Mediator.h>
#include <ConcreteColleague1.h>
#include <ConcreteColleague2.h>

class ConcreteMediator :public Mediator
{
public:
	void SetColleague1(ConcreteColleague1* colleague1);
	void SetColleague2(ConcreteColleague2* colleague2);
	virtual void Send(std::string message, Colleague * colleague) override;

private:
	ConcreteColleague1 *m_Colleague1;
	ConcreteColleague2 *m_Colleague2;
};

#endif // !ConcreteMediator_H
