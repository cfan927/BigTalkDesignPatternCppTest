#include "ConcreteColleague1.h"

ConcreteColleague1::ConcreteColleague1(Mediator * mediator) :Colleague(mediator)
{
	// TO-DO
}

void ConcreteColleague1::Send(std::string message)
{
	this->m_Mediator->Send(message, this);
}

void ConcreteColleague1::Notify(std::string message)
{
	std::cout << "ͬ��1�õ���Ϣ " << message.c_str() << std::endl;
}
