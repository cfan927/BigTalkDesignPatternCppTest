#include <iostream>

#include <Work.h>

using namespace std;

void main()
{
	Work *emergencyProjects = new Work();
	emergencyProjects->SetHour(9);
	emergencyProjects->WriteProgram();
	emergencyProjects->SetHour(10);
	emergencyProjects->WriteProgram();
	emergencyProjects->SetHour(12);
	emergencyProjects->WriteProgram();
	emergencyProjects->SetHour(13);
	emergencyProjects->WriteProgram();
	emergencyProjects->SetHour(14);
	emergencyProjects->WriteProgram();
	emergencyProjects->SetHour(17);

	emergencyProjects->SetTaskFinished(false);

	emergencyProjects->WriteProgram();
	emergencyProjects->SetHour(19);
	emergencyProjects->WriteProgram();
	emergencyProjects->SetHour(22);
	emergencyProjects->WriteProgram();

	getchar();
}


