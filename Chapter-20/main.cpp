#include <iostream>

#include "ConcreteAggregate.h"
#include "ConcreteIterator.h"
#include "Iterator.h"

using namespace std;

void main()
{
	ConcreteAggregate *a = new ConcreteAggregate();

	a->SetItem("大鸟");
	a->SetItem("小菜");
	a->SetItem("行李");
	a->SetItem("老外");
	a->SetItem("公交内部员工");
	a->SetItem("小偷");

	Iterator *i = new ConcreteIterator(a);

	std::string item = i->First();
	while (!i->IsDone())
	{
		std::cout << i->CurrentItem() << " 请买票" << std::endl;
		i->Next();
	}

	getchar();
}


