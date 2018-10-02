#ifndef Facade_H
#define Facade_H

#include <SubSystemOne.h>
#include <SubSystemTwo.h>
#include <SubSystemThree.h>
#include <SubSystemFour.h>

class Facade
{
public:
	Facade();

	void MethodA();
	void MethodB();

private:
	SubSystemOne *one;
	SubSystemTwo *two;
	SubSystemThree *three;
	SubSystemFour *four;
};

#endif // !Facade_H
