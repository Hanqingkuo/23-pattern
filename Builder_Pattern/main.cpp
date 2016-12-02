#include "Builder.h"
#include "Director.h"
#include "Product.h"
#include <iostream>

int main()
{
	Director* d = new Director(new ConcreateBuilder());
	d->Construct();
	return 0;
}