#ifndef Colleague_H
#define Colleague_H

class Mediator;
class Colleague
{
public:
	Colleague(Mediator *mediator);

protected:
	Mediator *m_Mediator;
};

#endif // !Colleague_H
