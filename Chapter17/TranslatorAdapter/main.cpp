#include <iostream>

#include "Forwards.h"
#include "Guards.h"
#include "Center.h"
#include "Translator.h"

using namespace std;

void main()
{
	Player *b = new Forwards("�͵ٶ�");
	b->Attack();
	Player *m = new Guards("��˸��׵�");
	m->Attack();

	Player *ym = new Translator("Ҧ��");
	ym->Attack();
	ym->Defense();

	getchar();
}