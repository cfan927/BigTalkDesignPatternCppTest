#include "Finery.h"

Finery::Finery()
{
	// TO-DO
}

Finery::~Finery()
{
	// TO-DO
}

void Finery::Decorate(Person *component)
{
	this->m_Component = component;
}

void Finery::Show()
{
	if (m_Component != nullptr)
	{
		m_Component->Show();
	}
}
