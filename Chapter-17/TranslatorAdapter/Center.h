#pragma once

#include <iostream>
#include "Player.h"

// �з�
class Center :public Player
{
public:
	Center(std::string name) :Player(name) {};

	void Attack() override;
	void Defense() override;
};