#ifndef Work_H
#define Work_H

class State;

class Work
{
public:
	Work();

	void SetHour(double h);
	double GetHour();

	void SetTaskFinished(bool finish);
	bool GetTaskFinished();

	void SetState(State *s);
	void WriteProgram();

private:
	State *m_CurrentState;
	double m_Hour;
	bool m_Finish;
};

#endif // !Work_H
