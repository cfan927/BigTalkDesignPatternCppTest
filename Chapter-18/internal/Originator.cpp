#include "Originator.h"

#include <iostream>

void Originator::SetState(std::string state)
{
	this->m_State = state;
}

std::string Originator::GetState()
{
	return this->m_State;
}

Memento * Originator::CreateMemento()
{
	return new Memento(this->m_State);
}

void Originator::SetMemento(Memento *memento)
{
	this->m_State = memento->GetState();
}

void Originator::Show()
{
	std::cout << "State=" << this->m_State << std::endl;
}
