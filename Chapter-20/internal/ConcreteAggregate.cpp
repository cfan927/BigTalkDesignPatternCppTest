#include "ConcreteAggregate.h"
#include "ConcreteIterator.h"

Iterator * ConcreteAggregate::CreateIterator()
{
	return new ConcreteIterator(this);
}

int ConcreteAggregate::GetCount()
{
	return this->m_Items.size();
}

void ConcreteAggregate::SetItem(std::string item)
{
	this->m_Items.push_back(item);
}

std::string ConcreteAggregate::GetItem(int i)
{
	std::list<std::string>::iterator it = this->m_Items.begin();
	for (int k = 0; k < i; k++)
	{
		it++;
	}
	return it->data();
}
