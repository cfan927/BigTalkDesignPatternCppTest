#ifndef ConcreteCommand_H
#define ConcreteCommand_H

#include <Command.h>
#include <Receiver.h>

class ConcreteCommand :public Command
{
public:
	ConcreteCommand(Receiver *receiver);
	virtual void Execute() override;
};

#endif // !ConcreteCommand_H
