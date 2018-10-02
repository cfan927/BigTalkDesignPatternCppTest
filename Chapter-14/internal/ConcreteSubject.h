#ifndef ConcreteSubject_H
#define ConcreteSubject_H

#include <Subject.h>

class ConcreteSubject :public Subject
{
public:
	void SetSubjectState(std::string state);
	std::string GetSubjectState();

private:
	std::string m_SubjectState;
};

#endif // !ConcreteSubject_H
