#ifndef ConcreteIterator_H
#define ConcreteIterator_H

#include <Iterator.h>

class ConcreteAggregate;

class ConcreteIterator :public Iterator
{
public:
	ConcreteIterator(ConcreteAggregate *aggregate);

	virtual std::string First() override;
	virtual std::string Next() override;
	virtual bool IsDone() override;
	virtual std::string CurrentItem() override;

private:
	ConcreteAggregate *m_Aggregate;
	int m_Current = 0;
};

#endif // !ConcreteIterator_H
