#include "ConcreteColleague2.h"

ConcreteColleague2::ConcreteColleague2(Mediator * mediator) :Colleague(mediator)
{
	// TO-DO
}

void ConcreteColleague2::Send(std::string message)
{
	this->m_Mediator->Send(message, this);
}

void ConcreteColleague2::Notify(std::string message)
{
	std::cout << "ͬ��2�õ���Ϣ " << message.c_str() << std::endl;
}
