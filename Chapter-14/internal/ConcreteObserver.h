#ifndef ConcreteObserver_H
#define ConcreteObserver_H

#include <string>

#include <Observer.h>
#include <ConcreteSubject.h>

class ConcreteObserver :public Observer
{
public:
	ConcreteObserver(ConcreteSubject *subject, std::string name);
	virtual void Update() override;
	void SetConcreteSubject(ConcreteSubject *subject);
	ConcreteSubject* GetConcreteSubject();

private:
	std::string m_Name;
	std::string m_ObserverState;
	ConcreteSubject *m_Subject;
};

#endif // !ConcreteObserver_H
