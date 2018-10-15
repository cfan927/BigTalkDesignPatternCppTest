#ifndef Handler_H
#define Handler_H

class Handler
{
public:
	void SetSuccessor(Handler *successor);
	virtual void HandlerRequest(int request) = 0;

protected:
	Handler* m_Successor;
};

#endif // !Handler_H
