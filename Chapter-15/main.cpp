#include <iostream>

#include <User.h>
#include <Department.h>
#include <IFactory.h>
#include <IUser.h>
#include <IDepartment.h>

#include <AccessFactory.h>
#include <SqlServerFactory.h>

using namespace std;

void main()
{
	User *user = new User();
	Department *department = new Department();

	IFactory *factory = new AccessFactory();
	IUser *iu = factory->CreateUser();

	iu->Insert(user);
	iu->GetUser(1);

	IDepartment *id = factory->CreateDepartment();
	id->Insert(department);
	id->GetDepartment(1);

	getchar();
}


