#include "ForenoonState.h"
#include "NoonState.h"

void ForenoonState::WriteProgram(Work *w)
{
	if (w->GetHour() < 12)
	{
		std::cout << "��ǰʱ��" << w->GetHour() << "�� ���繤��������ٱ�" << std::endl;
	}
	else
	{
		w->SetState(new NoonState());
		w->WriteProgram();
	}
}
