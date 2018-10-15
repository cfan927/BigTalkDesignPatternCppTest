#include "ConcreteHandler3.h"

#include <iostream>

void ConcreteHandler3::HandlerRequest(int request)
{
	if (request >= 20 && request < 30)
	{
		std::cout << "´¦ÀíÇëÇó" << request << std::endl;
	}
	else if (this->m_Successor != nullptr)
	{
		this->m_Successor->HandlerRequest(request);
	}
}
