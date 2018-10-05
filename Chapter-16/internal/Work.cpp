#include "Work.h"
#include "State.h"

#include "ForenoonState.h"

Work::Work()
{
	this->m_CurrentState = new ForenoonState();
}

void Work::SetHour(double h)
{
	this->m_Hour = h;
}

double Work::GetHour()
{
	return this->m_Hour;
}

void Work::SetTaskFinished(bool finish)
{
	this->m_Finish = finish;
}

bool Work::GetTaskFinished()
{
	return this->m_Finish;
}

void Work::SetState(State * s)
{
	this->m_CurrentState = s;
}

void Work::WriteProgram()
{
	this->m_CurrentState->WriteProgram(this);
}
