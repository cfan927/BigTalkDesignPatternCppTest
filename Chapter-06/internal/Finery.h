#ifndef Finery_H
#define Finery_H

#include "Person.h"

class Finery : public Person
{
public:
	explicit Finery();
	~Finery();

	void Decorate(Person *conponent);
	virtual void Show() override;

protected:
	Person *m_Component;
};

#endif // !Finery_H

