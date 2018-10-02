#include <ConcreteBuilder2.h>

ConcreteBuilder2::ConcreteBuilder2()
{
	this->m_Product = new Product();
}

void ConcreteBuilder2::BuildPartA()
{
	this->m_Product->Add("部件X");
}

void ConcreteBuilder2::BuildPartB()
{
	this->m_Product->Add("部件Y");
}

Product* ConcreteBuilder2::GetResult()
{
	return this->m_Product;
}
