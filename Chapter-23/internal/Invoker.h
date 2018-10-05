#ifndef Invoker_H
#define Invoker_H

#include <Command.h>

class Invoker
{
public:
	void SetCommand(Command *command);
	void ExecuteCommand();

private:
	Command *m_Command;
};

#endif // !Invoker_H
