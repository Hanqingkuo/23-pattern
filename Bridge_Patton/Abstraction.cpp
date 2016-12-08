#include "Abstraction.h"
#include "AbstractionImp.h"
#include <iostream>

Abstraction::Abstraction(){}
Abstraction::~Abstraction(){}

RefinedAbstraction::RefinedAbstraction(AbstractionImp* _imp)
{
	imp = _imp;
}
RefinedAbstraction::~RefinedAbstraction(){}
void RefinedAbstraction::Opration()
{
	imp->Opration();
}