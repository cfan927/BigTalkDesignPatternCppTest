#include "OperationAdd.h"

OperationAdd::OperationAdd()
{
	std::cout << "Created add operation..." << std::endl;
}

double OperationAdd::GetResult()
{
	double result = 0;
	result = m_NumberA + m_NumberB;
	return result;
}