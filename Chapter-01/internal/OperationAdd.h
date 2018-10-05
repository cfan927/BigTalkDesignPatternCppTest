#include "Operation.h"

class OperationAdd : public Operation
{
public:
	OperationAdd();
	double GetResult() override;
};
