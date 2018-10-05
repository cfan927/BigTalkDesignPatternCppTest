#include "Leaf.h"

#include <iostream>

Leaf::Leaf(std::string name) :Component(name)
{
	this->m_Name = name;
}

void Leaf::Add(Component * c)
{
	std::cout << "Cannot add to leaf" << std::endl;
}

void Leaf::Remove(Component * c)
{
	std::cout << "Cannot remove from a leaf" << std::endl;
}

void Leaf::Display(int depth)
{
	for (int i = 0; i < depth; i++)
	{
		std::cout << "-";
	}
	std::cout << this->m_Name << std::endl;
}
