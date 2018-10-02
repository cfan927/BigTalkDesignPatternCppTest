#ifndef Product_H
#define Product_H

#include <list>

class Product
{
public:
	std::list<std::string> m_Parts;
	
	void Add(std::string part);
	void Show();
};

#endif // !Product_H
