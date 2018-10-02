#ifndef ConcreteBuilder1_H
#define ConcreteBuilder1_H

#include <Builder.h>
#include <Product.h>

class ConcreteBuilder1 :public Builder
{
public:
	ConcreteBuilder1();

	virtual void BuildPartA();
	virtual void BuildPartB();
	virtual Product* GetResult();

private:
	Product *m_Product;
};

#endif // !ConcreteBuilder1_H
