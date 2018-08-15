#pragma once

#include "Player.h"
#include "ForeignCenter.h"

class Translator : public Player
{
public:
	Translator(std::string name);

	void Attack() override;
	void Defense() override;

private:
	ForeignCenter wjzf;
};