#ifndef Component_H
#define Component_H

#include <string>

class Component
{
public:
	Component(std::string name);

	virtual void Add(Component *c) = 0;
	virtual void Remove(Component *c) = 0;
	virtual void Display(int depth) = 0;

private:
	std::string m_Name;
};

#endif // !Composite_H
