#pragma once

#include <iostream>
#include "Player.h"

// ǰ��
class Forwards :public Player
{
public:
	Forwards(std::string name) :Player(name) {};

	void Attack() override;
	void Defense() override;
};