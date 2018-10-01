#ifndef SchoolGirl_H
#define SchoolGirl_H

#include <string>

class SchoolGirl
{
public:
	SchoolGirl();
	~SchoolGirl();

	void SetName(std::string);
	std::string GetName();

private:
	std::string m_Name;
};

#endif // !SchoolGirl_H

