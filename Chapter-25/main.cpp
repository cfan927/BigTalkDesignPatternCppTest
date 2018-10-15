#include <iostream>

#include <ConcreteMediator.h>
#include <ConcreteColleague1.h>
#include <ConcreteColleague2.h>

using namespace std;

void main()
{
	ConcreteMediator *m = new ConcreteMediator();

	ConcreteColleague1 *c1 = new ConcreteColleague1(m);
	ConcreteColleague2 *c2 = new ConcreteColleague2(m);

	m->SetColleague1(c1);
	m->SetColleague2(c2);

	c1->Send("�Թ�������");
	c2->Send("û���أ��������ͣ�");

	getchar();
}


