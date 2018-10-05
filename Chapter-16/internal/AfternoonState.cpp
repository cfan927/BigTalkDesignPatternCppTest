#include "AfternoonState.h"
#include "EveningState.h"

void AfternoonState::WriteProgram(Work *w)
{
	if (w->GetHour() < 17)
	{
		std::cout << "��ǰʱ��" << w->GetHour() << "�� ����״̬����������Ŭ��" << std::endl;
	}
	else
	{
		w->SetState(new EveningState());
		w->WriteProgram();
	}
}
