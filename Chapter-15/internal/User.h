#ifndef User_H
#define User_H

#include <string>

class User
{
public:
	void SetId(int id);
	int GetId();
	void SetName(std::string name);
	std::string GetName();
	
private:
	int m_Id;
	std::string m_Name;
};

#endif // !IFactory_H
