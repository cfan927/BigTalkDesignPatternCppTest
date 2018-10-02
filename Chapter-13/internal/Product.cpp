#include <Product.h>

#include <iostream>

void Product::Add(std::string part)
{
	this->m_Parts.push_back(part);
}

void Product::Show()
{
	std::cout << "��Ʒ������" << std::endl;
	for each (std::string part in m_Parts)
	{
		std::cout << part.c_str() << std::endl;
	}
}
