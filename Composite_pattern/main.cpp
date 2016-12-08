#include "Composite.h"
#include <iostream>

int main()
{
	Leaf *l = new Leaf();
	l->Operation();

	Composite* p = new Component();
	p->Add(l);
	p->Operation();
	Composite *pp = p->GetChild(0);
	pp->Operation();
}