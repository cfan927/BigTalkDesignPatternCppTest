#include "EveningState.h"
#include "SleepingState.h"

void EveningState::WriteProgram(Work *w)
{
	if (w->GetHour() < 21)
	{
		std::cout << "当前时间" << w->GetHour() << "点 加班饿，疲惫之极" << std::endl;
	}
	else
	{
		w->SetState(new SleepingState());
		w->WriteProgram();
	}
}
