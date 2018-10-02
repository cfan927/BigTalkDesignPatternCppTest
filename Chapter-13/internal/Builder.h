#ifndef Builder_H
#define Builder_H

#include <Product.h>

class Builder
{
public:
	Builder();

	virtual void BuildPartA() = 0;
	virtual void BuildPartB() = 0;
	virtual Product* GetResult() = 0;
};

#endif // !Builder_H
