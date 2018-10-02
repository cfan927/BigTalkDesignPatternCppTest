#include <ConcreteBuilder1.h>

ConcreteBuilder1::ConcreteBuilder1()
{
	this->m_Product = new Product();
}

void ConcreteBuilder1::BuildPartA()
{
	this->m_Product->Add("����A");
}

void ConcreteBuilder1::BuildPartB()
{
	this->m_Product->Add("����B");
}

Product* ConcreteBuilder1::GetResult()
{
	return this->m_Product;
}
