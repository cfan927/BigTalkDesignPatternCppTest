#ifndef NoonState_H
#define NoonState_H

#include "State.h"
#include "Work.h"

class NoonState :public State
{
public:
	virtual void WriteProgram(Work *w) override;
};

#endif // !NoonState_H
