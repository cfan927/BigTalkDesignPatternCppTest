#include "EveningState.h"
#include "SleepingState.h"

void EveningState::WriteProgram(Work *w)
{
	if (w->GetHour() < 21)
	{
		std::cout << "��ǰʱ��" << w->GetHour() << "�� �Ӱ����ƣ��֮��" << std::endl;
	}
	else
	{
		w->SetState(new SleepingState());
		w->WriteProgram();
	}
}
