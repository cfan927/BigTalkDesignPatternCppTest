#ifndef ConcreteBuilder2_H
#define ConcreteBuilder2_H

#include <Builder.h>
#include <Product.h>

class ConcreteBuilder2 :public Builder
{
public:
	ConcreteBuilder2();

	virtual void BuildPartA();
	virtual void BuildPartB();
	virtual Product* GetResult();

private:
	Product *m_Product;
};

#endif // !ConcreteBuilder2_H
