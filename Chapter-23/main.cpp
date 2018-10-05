#include <iostream>

#include <Command.h>
#include <ConcreteCommand.h>
#include <Invoker.h>
#include <Receiver.h>

using namespace std;

void main()
{
	Receiver *r = new Receiver();
	Command *c = new ConcreteCommand(r);
	Invoker *i = new Invoker();

	i->SetCommand(c);
	i->ExecuteCommand();

	getchar();
}


