#ifndef Leaf_H
#define Leaf_H

#include "Component.h"

class Leaf :public Component
{
public:
	Leaf(std::string name);

	virtual void Add(Component * c) override;
	virtual void Remove(Component * c) override;
	virtual void Display(int depth) override;

private:
	std::string m_Name;
};

#endif // !Leaf_H
