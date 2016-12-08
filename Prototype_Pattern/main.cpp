#include "Prototype.h"
#include <iostream>

int main()
{
	Prototype* p = new ConcreatePrototype();
	Prototype* p1 = p->Clone();
	return 0;
}