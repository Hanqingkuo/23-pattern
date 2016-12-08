#include "Abstraction.h"
#include "AbstractionImp.h"
#include <iostream>

int main()
{
	AbstractionImp *p = new ConcreateAbstractionImpA();
	Abstraction *pa = new RefinedAbstraction(p);
	pa->Opration();
	return 0;
}