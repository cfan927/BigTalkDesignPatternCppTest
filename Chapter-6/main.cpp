#include <iostream>

#include <Person.h>
#include <Sneakers.h>
#include <BigTrouser.h>
#include <TShirts.h>
#include <LeatherShoes.h>
#include <Tie.h>
#include <Suit.h>

using namespace std;

void main()
{
	Person *xc = new Person("С��");

	///
	cout << "��һ��װ��" << endl;

	Sneakers *pqx = new Sneakers();
	BigTrouser *kk = new BigTrouser();
	TShirts *dtx = new TShirts();

	pqx->Decorate(xc);
	kk->Decorate(pqx);
	dtx->Decorate(kk);
	dtx->Show();

	///
	cout << "�ڶ���װ��" << endl;

	LeatherShoes *px = new LeatherShoes();
	Tie *ld = new Tie();
	Suit *xz = new Suit();

	px->Decorate(xc);
	ld->Decorate(px);
	xz->Decorate(ld);
	xz->Show();

	getchar();
}


