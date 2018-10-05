#include "Operation.h"

Operation::Operation()
	: m_NumberA(0)
	, m_NumberB(0)
{
}

void Operation::SetNumberA(double value)
{
	this->m_NumberA = value;
}

double Operation::GetNumberA()
{
	return m_NumberA;
}

void Operation::SetNumberB(double value)
{
	this->m_NumberB = value;
}

double Operation::GetNumberB()
{
	return m_NumberB;
}

double Operation::GetResult()
{
	double result = 0;
	return result;
}