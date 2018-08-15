#include <iostream>

#include "Forwards.h"
#include "Guards.h"
#include "Center.h"
#include "Translator.h"

using namespace std;

void main()
{
	Player *b = new Forwards("°ÍµÙ¶û");
	b->Attack();
	Player *m = new Guards("Âó¿Ë¸ñÀ×µÏ");
	m->Attack();

	Player *ym = new Translator("Ò¦Ã÷");
	ym->Attack();
	ym->Defense();

	getchar();
}