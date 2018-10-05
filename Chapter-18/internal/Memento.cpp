#include "Memento.h"

Memento::Memento(std::string state)
{
	this->m_State = state;
}

std::string Memento::GetState()
{
	return this->m_State;
}
