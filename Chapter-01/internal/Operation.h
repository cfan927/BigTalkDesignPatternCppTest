#pragma once

#include <iostream>

class Operation
{
public:
	Operation();

	virtual double GetResult();

	void SetNumberA(double value);
	double GetNumberA();
	void SetNumberB(double value);
	double GetNumberB();

protected:
	double m_NumberA;
	double m_NumberB;
};