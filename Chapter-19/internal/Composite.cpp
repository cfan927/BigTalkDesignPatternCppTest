#include "Composite.h"

#include <iostream>

Composite::Composite(std::string name) :Component(name)
{
	this->m_Name = name;
}

void Composite::Add(Component * c)
{
	m_Children.push_back(c);
}

void Composite::Remove(Component * c)
{
	m_Children.remove(c);
}

void Composite::Display(int depth)
{
	for (int i = 0; i < depth; i++)
	{
		std::cout << "-";
	}
	std::cout << this->m_Name << std::endl;

	for each (Component *component in m_Children)
	{
		component->Display(depth + 2);
	}
}
