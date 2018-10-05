#ifndef SqlserverDepartment_H
#define SqlserverDepartment_H

#include "IDepartment.h"
#include "Department.h"

class SqlserverDepartment :public IDepartment
{
public:
	virtual void Insert(Department * department) override;
	virtual Department * GetDepartment(int id) override;
};

#endif // !SqlserverDepartment_H
