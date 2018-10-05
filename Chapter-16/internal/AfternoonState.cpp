#include "AfternoonState.h"
#include "EveningState.h"

void AfternoonState::WriteProgram(Work *w)
{
	if (w->GetHour() < 17)
	{
		std::cout << "当前时间" << w->GetHour() << "点 下午状态还不错，继续努力" << std::endl;
	}
	else
	{
		w->SetState(new EveningState());
		w->WriteProgram();
	}
}
