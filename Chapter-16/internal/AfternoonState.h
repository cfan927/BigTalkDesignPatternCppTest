#ifndef AfternoonState_H
#define AfternoonState_H

#include "State.h"
#include "Work.h"

class AfternoonState :public State
{
public:
	virtual void WriteProgram(Work *w) override;
};

#endif // !AfternoonState_H
