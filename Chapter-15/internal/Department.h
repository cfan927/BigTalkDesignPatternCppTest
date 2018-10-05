#ifndef Department_H
#define Department_H

#include <string>

class Department
{
public:
	void SetId(int id);
	int GetId();
	void SetDepartmentName(std::string name);
	std::string GetDepartmentName();

private:
	int m_Id;
	std::string m_DepartmentName;
};

#endif // !Department_H
