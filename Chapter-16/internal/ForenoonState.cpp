#include "ForenoonState.h"
#include "NoonState.h"

void ForenoonState::WriteProgram(Work *w)
{
	if (w->GetHour() < 12)
	{
		std::cout << "当前时间" << w->GetHour() << "点 上午工作，精神百倍" << std::endl;
	}
	else
	{
		w->SetState(new NoonState());
		w->WriteProgram();
	}
}
