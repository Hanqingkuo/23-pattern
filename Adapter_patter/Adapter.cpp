#include "Adapter.h"
#include <iostream>

Target::Target(){}
Target::~Target(){}
void Target::Request()
{
	std::cout<<"Target::Request...\n";
}

Adaptee::Adaptee(){}
Adaptee::~Adaptee(){}
void Adaptee::SpecificRequst()
{
	std::cout<<"Adaptee::SpecificRequest...\n";
}

Adapter::Adapter(){}
Adapter::~Adapter(){}
void Adapter::Request()
{
	this->SpecificRequst();
}