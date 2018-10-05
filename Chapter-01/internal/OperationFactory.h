#include <string>
#include "Operation.h"
#include "OperationAdd.h"
#include "OperationSub.h"
#include "OperationMul.h"
#include "OperationDiv.h"

class OperationFactory
{
public:
	static Operation* CreateOperate(std::string operate);
};