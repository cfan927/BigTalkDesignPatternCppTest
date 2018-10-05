#ifndef ConcreteAggregate_H
#define ConcreteAggregate_H

#include <list>
#include <Aggregate.h>

class ConcreteAggregate :public Aggregate
{
public:
	virtual Iterator* CreateIterator() override;
	int GetCount();
	void SetItem(std::string);
	std::string GetItem(int i);

private:
	std::list<std::string> m_Items;
};

#endif // !ConcreteAggregate_H
