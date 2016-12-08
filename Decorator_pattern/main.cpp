#include "Decorator.h"
#include <iostream>

int main()
{
	Conponent *p = new ConcreateConponent();
	Decorator *ptr = new ConcreateDecorator(p);
	ptr->Operation();
	delete ptr;
	return 0;
}