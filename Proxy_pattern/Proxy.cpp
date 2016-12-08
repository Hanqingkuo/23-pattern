#include "Proxy.h"
#include <iostream>

Subject::Subject(){}
Subject::~Subject(){}
void Subject::Request()
{
	std::cout<<"subject..\n";
}
ConcreateSubject::ConcreateSubject(){}
ConcreateSubject::~ConcreateSubject(){}
void ConcreateSubject::Request()
{
	std::cout<<"ConcreateQuest Request...\n";
}

Proxy::Proxy(Subject* ob)
{
	sub = ob;
}
Proxy::~Proxy()
{
	delete sub;
}

void Proxy::Request()
{
	std::cout<<"Proxy Request...\n";
	sub->Request();
}