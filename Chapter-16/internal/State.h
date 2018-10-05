#ifndef State_H
#define State_H

#include <iostream>

class Work;

class State
{
public:
	State();
	virtual void WriteProgram(Work *w) = 0;
};

#endif // !State_H
