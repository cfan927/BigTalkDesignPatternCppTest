#ifndef Subject_H
#define Subject_H

#include <iostream>
#include <list>

#include <Observer.h>

class Subject
{
public:
	void Attach(Observer *observer);
	void Detach(Observer *observer);
	void Notify();

private:
	std::list<Observer*> m_Observers;
};

#endif // !Subject_H
