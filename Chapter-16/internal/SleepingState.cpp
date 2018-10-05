#include "SleepingState.h"

void SleepingState::WriteProgram(Work *w)
{
	std::cout << "当前时间" << w->GetHour() << "点 不行了，睡着了" << std::endl;
}
