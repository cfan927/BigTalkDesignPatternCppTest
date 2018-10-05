#ifndef Memento_H
#define Memento_H

#include <string>

class Memento
{
public:
	Memento(std::string state);
	std::string GetState();

private:
	std::string m_State;
};

#endif // !Memento_H
