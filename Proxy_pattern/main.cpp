#include "Proxy.h"
#include <iostream>

int main()
{
	Subject* ob = new ConcreateSubject();
	Proxy* p = new Proxy(ob);
	p->Request();
	return 0;
}