#include <iostream>

#include <Originator.h>
#include <Caretaker.h>
#include <Memento.h>

using namespace std;

void main()
{
	Originator *o = new Originator();
	o->SetState("On");
	o->Show();

	Caretaker *c = new Caretaker();
	c->SetMemento(o->CreateMemento());

	o->SetState("Off");
	o->Show();

	o->SetMemento(c->GetMemento());
	o->Show();

	getchar();
}


