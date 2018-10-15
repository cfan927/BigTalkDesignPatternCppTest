#include "ConcreteMediator.h"

void ConcreteMediator::SetColleague1(ConcreteColleague1 * colleague1)
{
	this->m_Colleague1 = colleague1;
}

void ConcreteMediator::SetColleague2(ConcreteColleague2 * colleague2)
{
	this->m_Colleague2 = colleague2;
}

void ConcreteMediator::Send(std::string message, Colleague * colleague)
{
	if (colleague == this->m_Colleague1)
	{
		this->m_Colleague2->Notify(message);
	}
	else
	{
		this->m_Colleague1->Notify(message);
	}
}
