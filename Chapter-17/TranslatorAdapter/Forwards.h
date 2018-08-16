#pragma once

#include <iostream>
#include "Player.h"

// Ç°·æ
class Forwards :public Player
{
public:
	Forwards(std::string name) :Player(name) {};

	void Attack() override;
	void Defense() override;
};