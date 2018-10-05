#ifndef Command_H
#define Command_H

#include <Receiver.h>

class Command
{
public:
	Command(Receiver *receiver);
	virtual void Execute() = 0;

protected:
	Receiver *m_Receiver;
};

#endif // !Command_H
