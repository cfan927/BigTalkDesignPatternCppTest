#include "OperationFactory.h"

Operation* OperationFactory::CreateOperate(std::string operate)
{
	Operation *oper;
	// if条件语句可优化为switch
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