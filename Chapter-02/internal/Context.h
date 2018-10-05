#include "Strategy.h"

class Context
{
public:
	Context(Strategy *strategy);

	void ContextInterface();

	Strategy *strategy;
};