#ifndef Caretaker_H
#define Caretaker_H

#include "Memento.h"

class Caretaker
{
public:
	void SetMemento(Memento *memento);
	Memento* GetMemento();

private:
	Memento *m_Memento;
};

#endif // !Caretaker_H
