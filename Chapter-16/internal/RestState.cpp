#include "RestState.h"

void RestState::WriteProgram(Work *w)
{
	std::cout << "当前时间" << w->GetHour() << "点 下班回家了" << std::endl;
}
