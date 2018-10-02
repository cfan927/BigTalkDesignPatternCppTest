#include <iostream>

#include <Facade.h>

using namespace std;

void main()
{
	Facade *facade = new Facade();

	facade->MethodA();
	facade->MethodB();

	getchar();
}


