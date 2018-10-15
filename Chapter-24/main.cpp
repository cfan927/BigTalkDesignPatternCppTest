#include <iostream>

#include <Handler.h>
#include <ConcreteHandler1.h>
#include <ConcreteHandler2.h>
#include <ConcreteHandler3.h>

using namespace std;

void main()
{
	Handler *h1 = new ConcreteHandler1();
	Handler *h2 = new ConcreteHandler2();
	Handler *h3 = new ConcreteHandler3();
	h1->SetSuccessor(h2);
	h2->SetSuccessor(h3);

	int requests[] = { 2,5,14,22,18,3,27,20 };

	for each (int request in requests)
	{
		h1->HandlerRequest(request);
	}

	getchar();
}


