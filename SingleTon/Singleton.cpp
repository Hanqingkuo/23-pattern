#include "Singleton.h"
#include <iostream>

 Singleton* Singleton::instance = NULL;

Singleton::Singleton()
{
	std::cout<<"Singleton...\n";
}
Singleton* Singleton::Instance()
{
	if(instance == NULL)
	{
		instance = new Singleton();
	}
	return instance;
}