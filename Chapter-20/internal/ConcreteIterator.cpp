#include "ConcreteIterator.h"
#include "ConcreteAggregate.h"

ConcreteIterator::ConcreteIterator(ConcreteAggregate *aggregate)
{
	this->m_Aggregate = aggregate;
}

std::string ConcreteIterator::First()
{
	return this->m_Aggregate->GetItem(0);
}

std::string ConcreteIterator::Next()
{
	std::string ret;
	this->m_Current++;
	if (this->m_Current < this->m_Aggregate->GetCount())
	{
		ret = this->m_Aggregate->GetItem(this->m_Current);
	}
	return ret;
}

bool ConcreteIterator::IsDone()
{
	return this->m_Current >= this->m_Aggregate->GetCount() ? true : false;
}

std::string ConcreteIterator::CurrentItem()
{
	return this->m_Aggregate->GetItem(this->m_Current);
}
