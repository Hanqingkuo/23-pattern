#include <iostream>
#include "Facade.h"

int main()
{
	Facade * p = new Facade();
	p->OperationWrapper();
	return 0;
}