#include "Decorator.h"
#include <iostream>

Conponent::Conponent(){}
Conponent::~Conponent(){}
void Conponent::Operation(){}

ConcreateConponent::ConcreateConponent(){}
ConcreateConponent::~ConcreateConponent(){}
void ConcreateConponent::Operation()
{
	std::cout<<"ConcreateConponent Operation...\n";
}

Decorator::Decorator(Conponent *ptr)
{
	Cptr = ptr;
}
Decorator::~Decorator()
{
	delete Cptr;
}
void Decorator::Operation(){}

ConcreateDecorator::ConcreateDecorator(Conponent* ptr):Decorator(ptr)
{

}
ConcreateDecorator::~ConcreateDecorator(){}

void ConcreateDecorator::Operation()
{
	Cptr->Operation();
	this->AddedBehavior();
}
void ConcreateDecorator::AddedBehavior()
{
	std::cout<<"ConcreateDecortor AddedBehavior...\n";
}
