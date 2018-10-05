#include "Invoker.h"

void Invoker::SetCommand(Command * command)
{
	this->m_Command = command;
}

void Invoker::ExecuteCommand()
{
	this->m_Command->Execute();
}
