#pragma once

#include <iostream>
#include "Player.h"

// ºóÎÀ
class Guards :public Player
{
public:
	Guards(std::string name) :Player(name) {};

	void Attack() override;
	void Defense() override;
};