#include "Translator.h"

Translator::Translator(std::string name) : Player(name)
{
	wjzf.SetName(name);
}

void Translator::Attack()
{
	wjzf.ForeignAttack();
}

void Translator::Defense()
{
	wjzf.ForeignDefense();
}
