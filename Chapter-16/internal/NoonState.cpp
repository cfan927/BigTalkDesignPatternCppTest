#include "NoonState.h"
#include "AfternoonState.h"

void NoonState::WriteProgram(Work *w)
{
	if (w->GetHour() < 13)
	{
		std::cout << "当前时间" << w->GetHour() << "点 饿了，午饭；犯困，午休。" << std::endl;
	}
	else
	{
		w->SetState(new AfternoonState());
		w->WriteProgram();
	}
}
