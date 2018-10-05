#include <iostream>

#include "ConcreteAggregate.h"
#include "ConcreteIterator.h"
#include "Iterator.h"

using namespace std;

void main()
{
	ConcreteAggregate *a = new ConcreteAggregate();

	a->SetItem("����");
	a->SetItem("С��");
	a->SetItem("����");
	a->SetItem("����");
	a->SetItem("�����ڲ�Ա��");
	a->SetItem("С͵");

	Iterator *i = new ConcreteIterator(a);

	std::string item = i->First();
	while (!i->IsDone())
	{
		std::cout << i->CurrentItem() << " ����Ʊ" << std::endl;
		i->Next();
	}

	getchar();
}


