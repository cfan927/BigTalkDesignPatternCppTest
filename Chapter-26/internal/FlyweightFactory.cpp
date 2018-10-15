#include "FlyweightFactory.h"

FlyweightFactory::FlyweightFactory()
{
	this->m_Flyweights.insert(std::make_pair("X", new ConcreteFlyweight()));
	this->m_Flyweights.insert(std::make_pair("Y", new ConcreteFlyweight()));
	this->m_Flyweights.insert(std::make_pair("Z", new ConcreteFlyweight()));
}

Flyweight * FlyweightFactory::GetFlyweight(std::string key)
{
	std::map<std::string, ConcreteFlyweight*>::iterator iter;
	iter = this->m_Flyweights.find(key);
	if (iter != this->m_Flyweights.end())
	{
		return iter->second;
	}
	else
	{
		return nullptr;
	}
}
