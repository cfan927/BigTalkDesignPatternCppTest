#include "Colleague.h"
#include <Mediator.h>

Colleague::Colleague(Mediator *mediator)
{
	this->m_Mediator = mediator;
}
