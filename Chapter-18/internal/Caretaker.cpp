#include "Caretaker.h"

void Caretaker::SetMemento(Memento *memento)
{
	this->m_Memento = memento;
}

Memento* Caretaker::GetMemento()
{
	return this->m_Memento;
}
