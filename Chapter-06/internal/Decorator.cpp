#include "Decorator.h"

void Decorator::SetComponent(Component * component)
{
	this->m_Component = component;
}

void Decorator::Operation()
{
	if (this->m_Component != nullptr)
	{
		this->m_Component->Operation();
	}
}
