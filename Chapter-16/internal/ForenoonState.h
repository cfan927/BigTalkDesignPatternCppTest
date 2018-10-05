#ifndef ForenoonState_H
#define ForenoonState_H

#include "State.h"
#include "Work.h"

class ForenoonState :public State
{
public:
	virtual void WriteProgram(Work *w) override;
};

#endif // !ForenoonState_H
