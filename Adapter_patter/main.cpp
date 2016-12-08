#include "Adapter.h"
#include <iostream>

int main()
{
	Target* p = new Adapter();
	p->Request();
	return 0;
}