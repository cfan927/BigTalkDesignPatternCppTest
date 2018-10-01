#ifndef Person_H
#define Person_H

#include <string>
#include <iostream>

class Person
{
public:
	explicit Person();
	explicit Person(std::string name);
	~Person();

	virtual void Show();

private:
	std::string m_Name;
};

#endif // !Person_H
