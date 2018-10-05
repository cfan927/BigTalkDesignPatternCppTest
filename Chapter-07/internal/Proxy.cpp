#include "Proxy.h"

Proxy::Proxy(SchoolGirl *mm)
{
	this->m_Gg = new Pursuit(mm);
}

void Proxy::GiveDolls()
{
	m_Gg->GiveDolls();
}

void Proxy::GiveFlowers()
{
	m_Gg->GiveFlowers();
}

void Proxy::GiveChocolate()
{
	m_Gg->GiveChocolate();
}