#include "Context.h"

Context::Context(Strategy *strategy)
{
	this->strategy = strategy;
}

void Context::ContextInterface()
{
	this->strategy->AlgorithmInterface();
}
