#ifndef Iterator_H
#define Iterator_H

#include <string>

class Iterator
{
public:
	virtual std::string First() = 0;
	virtual std::string Next() = 0;
	virtual bool IsDone() = 0;
	virtual std::string CurrentItem() = 0;
};

#endif // !Iterator_H
