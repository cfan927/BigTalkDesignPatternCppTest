#ifndef Composite_H
#define Composite_H

#include <list>
#include "Component.h"

class Composite :public Component
{
public:
	Composite(std::string name);

	virtual void Add(Component * c) override;
	virtual void Remove(Component * c) override;
	virtual void Display(int depth) override;

private:
	std::string m_Name;
	std::list<Component*> m_Children;
};

#endif // !Composite_H
