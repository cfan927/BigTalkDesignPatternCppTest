#pragma once

#include <iostream>
#include "Player.h"

// ÖÐ·æ
class Center :public Player
{
public:
	Center(std::string name) :Player(name) {};

	void Attack() override;
	void Defense() override;
};