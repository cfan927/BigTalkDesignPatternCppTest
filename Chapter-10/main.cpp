#include <iostream>

#include <AbstractClass.h>
#include <ConcreteClassA.h>
#include <ConcreteClassB.h>

using namespace std;

void main()
{
	AbstractClass *c;

	c = new ConcreteClassA();
	c->TemplateMethod();

	c = new ConcreteClassB();
	c->TemplateMethod();

	getchar();
}


