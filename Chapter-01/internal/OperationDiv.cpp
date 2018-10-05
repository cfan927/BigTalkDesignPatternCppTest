#include "OperationDiv.h"

double OperationDiv::GetResult()
{
	double result = 0;

	if (m_NumberB == 0)
	{
		std::cout << "除数不能为0！" << std::endl;
		return 0;
	}

	result = m_NumberA / m_NumberB;
	return result;
}