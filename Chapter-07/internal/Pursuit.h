#ifndef Pursuit_H
#define Pursuit_H

#include <iostream>

#include <IGiveGift.h>
#include <SchoolGirl.h>

class Pursuit :public IGiveGift
{
public:
	Pursuit(SchoolGirl *mm);

	virtual void GiveDolls();
	virtual void GiveFlowers();
	virtual void GiveChocolate();

private:
	SchoolGirl *m_Mm;
};

#endif // !Pursuit_H



