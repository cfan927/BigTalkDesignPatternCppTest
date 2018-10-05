#ifndef EveningState_H
#define EveningState_H

#include "State.h"
#include "Work.h"

class EveningState :public State
{
public:
	virtual void WriteProgram(Work *w) override;
};

#endif // !EveningState_H
