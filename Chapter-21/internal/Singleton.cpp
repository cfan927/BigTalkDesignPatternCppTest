#include "Singleton.h"

Singleton* Singleton::m_Instance = nullptr;
Singleton::Singleton()
{
	// TO-DO
}

Singleton* Singleton::GetInstance()
{
	if (m_Instance == nullptr)
	{
		m_Instance = new Singleton();
	}
	return m_Instance;
}

