#include <iostream>

#include <SchoolGirl.h>
#include <Proxy.h>

using namespace std;

void main()
{
	SchoolGirl *danny = new SchoolGirl();
	danny->SetName("Danny");

	Proxy *proxy = new Proxy(danny);
	proxy->GiveDolls();
	proxy->GiveFlowers();
	proxy->GiveChocolate();

	getchar();
}


