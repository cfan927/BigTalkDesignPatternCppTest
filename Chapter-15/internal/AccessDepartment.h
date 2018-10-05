#ifndef AccessDepartment_H
#define AccessDepartment_H

#include "IDepartment.h"
#include "Department.h"

class AccessDepartment :public IDepartment
{
public:
	virtual void Insert(Department * department) override;
	virtual Department * GetDepartment(int id) override;
};

#endif // !AccessDepartment_H
