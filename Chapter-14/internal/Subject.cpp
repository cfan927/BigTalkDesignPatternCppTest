#include <Subject.h>

void Subject::Attach(Observer *observer)
{
	this->m_Observers.push_back(observer);
}

void Subject::Detach(Observer *observer)
{
	this->m_Observers.remove(observer);
}

void Subject::Notify()
{
	for each (Observer *observer in m_Observers)
	{
		observer->Update();
	}
}
