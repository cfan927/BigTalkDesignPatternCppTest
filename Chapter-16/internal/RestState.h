#ifndef RestState_H
#define RestState_H

#include "State.h"
#include "Work.h"

class RestState :public State
{
public:
	virtual void WriteProgram(Work *w) override;
};

#endif // !RestState_H
