#ifndef IDepartment_H
#define IDepartment_H

#include "Department.h"

class IDepartment
{
public:
	IDepartment();

	virtual void Insert(Department *department) = 0;
	virtual Department* GetDepartment(int id) = 0;
};

#endif // !IDepartment_H
