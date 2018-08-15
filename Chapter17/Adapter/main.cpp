#include <iostream>

#include "Adapter.h"

using namespace std;

void main()
{
	Target *target = new Adapter();
	target->Request();

	getchar();
}
