#include "Facade.h"
#include <iostream>
Subsystem1::Subsystem1(){}
Subsystem1::~Subsystem1(){}
void Subsystem1::Operation()
{
	std::cout<<"system1 operation...\n";
}

Subsystem2::Subsystem2(){}
Subsystem2::~Subsystem2(){}
void Subsystem2::Operation()
{
	std::cout<<"system2 operation...\n";
}

Facade::Facade()
{
	sys1 = new Subsystem1();
	sys2 = new Subsystem2();
}
Facade::~Facade()
{
	delete sys1;
	delete sys2;
}
void Facade::OperationWrapper()
{
	sys1->Operation();
	sys2->Operation();
}