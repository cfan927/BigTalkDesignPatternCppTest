#include "ConcreteCommand.h"

ConcreteCommand::ConcreteCommand(Receiver *receiver) :Command(receiver)
{
	// TO-DO
}

void ConcreteCommand::Execute()
{
	this->m_Receiver->Action();
}
