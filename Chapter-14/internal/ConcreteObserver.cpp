#include <ConcreteObserver.h>

ConcreteObserver::ConcreteObserver(ConcreteSubject *subject, std::string name)
{
	this->m_Subject = subject;
	this->m_Name = name;
}

void ConcreteObserver::Update()
{
	this->m_ObserverState = m_Subject->GetSubjectState();
	std::cout << "观察者" << this->m_Name << "的状态是" << this->m_ObserverState << std::endl;
}

void ConcreteObserver::SetConcreteSubject(ConcreteSubject *subject)
{
	this->m_Subject = subject;
}

ConcreteSubject* ConcreteObserver::GetConcreteSubject()
{
	return this->m_Subject;
}
