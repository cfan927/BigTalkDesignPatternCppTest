#include "NoonState.h"
#include "AfternoonState.h"

void NoonState::WriteProgram(Work *w)
{
	if (w->GetHour() < 13)
	{
		std::cout << "��ǰʱ��" << w->GetHour() << "�� ���ˣ��緹�����������ݡ�" << std::endl;
	}
	else
	{
		w->SetState(new AfternoonState());
		w->WriteProgram();
	}
}
