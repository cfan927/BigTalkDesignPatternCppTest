#ifndef Aggregate_H
#define Aggregate_H

#include <Iterator.h>

class Aggregate
{
public:
	virtual Iterator* CreateIterator() = 0;
};

#endif // !Aggregate_H
