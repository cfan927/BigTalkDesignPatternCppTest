#include "ConcreteHandler1.h"

#include <iostream>

void ConcreteHandler1::HandlerRequest(int request)
{
	if (request >= 0 && request < 10)
	{
		std::cout << "´¦ÀíÇëÇó" << request << std::endl;
	}
	else if (this->m_Successor != nullptr)
	{
		this->m_Successor->HandlerRequest(request);
	}
}
