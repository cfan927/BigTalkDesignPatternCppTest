#include "ConcreteHandler2.h"

#include <iostream>

void ConcreteHandler2::HandlerRequest(int request)
{
	if (request >= 10 && request < 20)
	{
		std::cout << "´¦ÀíÇëÇó" << request << std::endl;
	}
	else if (this->m_Successor != nullptr)
	{
		this->m_Successor->HandlerRequest(request);
	}
}
