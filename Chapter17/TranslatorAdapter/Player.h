#pragma once

#include <string>

class Player
{
public:
	Player(std::string name);

	virtual void Attack() = 0;
	virtual void Defense() = 0;

protected:
	std::string name;
};