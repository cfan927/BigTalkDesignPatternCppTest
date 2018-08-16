#pragma once

#include <iostream>
#include <string>

class ForeignCenter
{
public:
	void SetName(std::string name);
	std::string GetName();

	void ForeignAttack();
	void ForeignDefense();

protected:
	std::string name;
};