#ifndef Originator_H
#define Originator_H

#include <string>
#include "Memento.h"

class Originator
{
public:
	void SetState(std::string state);
	std::string GetState();
	Memento* CreateMemento();
	void SetMemento(Memento* memento);
	void Show();

private:
	std::string m_State;
};

#endif // !Originator_H
