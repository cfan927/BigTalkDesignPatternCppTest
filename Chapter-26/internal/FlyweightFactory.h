#ifndef FlyweightFactory_H
#define FlyweightFactory_H

#include <map>
#include <string>
#include <ConcreteFlyweight.h>

class FlyweightFactory
{
public:
	FlyweightFactory();
	Flyweight* GetFlyweight(std::string key);

private:
	std::map<std::string, ConcreteFlyweight*> m_Flyweights;
};

#endif // !FlyweightFactory_H
