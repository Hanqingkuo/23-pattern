#include "Prototype.h"
#include <iostream>
using namespace std;

Prototype::Prototype(){}
Prototype::~Prototype(){}
Prototype* Prototype::Clone()const
{
	return 0;
}

ConcreatePrototype::ConcreatePrototype(){}
ConcreatePrototype::~ConcreatePrototype(){}
ConcreatePrototype::ConcreatePrototype(const ConcreatePrototype& cp)
{
	cout<<"ConcreatePrototype copy...\n";
}
Prototype* ConcreatePrototype::Clone()const
{
	return new ConcreatePrototype(*this);
}
