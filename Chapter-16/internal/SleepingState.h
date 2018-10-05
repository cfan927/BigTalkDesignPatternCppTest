#ifndef SleepingState_H
#define SleepingState_H

#include "State.h"
#include "Work.h"

class SleepingState :public State
{
public:
	virtual void WriteProgram(Work *w) override;
};

#endif // !SleepingState_H
