#include <iostream>

#include <Singleton.h>

using namespace std;

void main()
{
	Singleton *s1 = Singleton::GetInstance();
	Singleton *s2 = Singleton::GetInstance();

	if (s1 == s2)
	{
		cout << "两个对象是相同的实例" << endl;
	}

	getchar();
}


