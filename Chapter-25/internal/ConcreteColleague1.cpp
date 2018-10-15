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
	std::cout << "同事1得到消息 " << message.c_str() << std::endl;
}
