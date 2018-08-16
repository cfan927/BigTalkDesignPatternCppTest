#include <iostream>
#include "internal/Context.h"
#include "internal/ConcreteStrategyA.h"
#include "internal/ConcreteStrategyB.h"
#include "internal/ConcreteStrategyC.h"

void main()
{
	Context *context;

	context = new Context(new ConcreteStrategyA());
	context->ContextInterface();

	context = new Context(new ConcreteStrategyB());
	context->ContextInterface();

	context = new Context(new ConcreteStrategyC());
	context->ContextInterface();

	getchar();
}


