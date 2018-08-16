#include "OperationFactory.h"

Operation* OperationFactory::CreateOperate(std::string operate)
{
	Operation *oper;
	// if���������Ż�Ϊswitch
	if (operate == "+")
	{
		oper = new OperationAdd();
	}
	else if (operate == "-")
	{
		oper = new OperationSub();
	}
	else if (operate == "*")
	{
		oper = new OperationMul();
	}
	else // div
	{
		oper = new OperationDiv();
	}
	return oper;
}