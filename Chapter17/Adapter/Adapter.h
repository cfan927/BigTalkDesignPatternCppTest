#pragma once

#include "Target.h"
#include "Adaptee.h"

class Adapter :public Target
{
public:
	void Request() override;

private:
	Adaptee adaptee;
};
