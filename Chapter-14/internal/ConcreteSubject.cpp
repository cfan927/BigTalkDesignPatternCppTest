#include <ConcreteSubject.h>

void ConcreteSubject::SetSubjectState(std::string state)
{
	this->m_SubjectState = state;
}

std::string ConcreteSubject::GetSubjectState()
{
	return this->m_SubjectState;
}
