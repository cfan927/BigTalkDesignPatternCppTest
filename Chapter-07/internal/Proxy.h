#ifndef Proxy_H
#define Proxy_H

#include <IGiveGift.h>
#include <SchoolGirl.h>
#include <Pursuit.h>

class Proxy :public IGiveGift
{
public:
	Proxy(SchoolGirl *mm);

	virtual void GiveDolls();
	virtual void GiveFlowers();
	virtual void GiveChocolate();

private:
	Pursuit *m_Gg;
};

#endif // !Proxy_H


