#include "AbstractionImp.h"
#include <iostream>
AbstractionImp::AbstractionImp(){}
AbstractionImp::~AbstractionImp(){}
void AbstractionImp::Opration()
{
	std::cout<<"AbstractionImp...imp\n";
}
ConcreateAbstractionImpA::ConcreateAbstractionImpA(){}
ConcreateAbstractionImpA::~ConcreateAbstractionImpA(){}
void ConcreateAbstractionImpA::Opration()
{
	std::cout<<"ConcreateAbstractionImpA...\n";
}

ConcreateAbstractionImpB::ConcreateAbstractionImpB(){}
ConcreateAbstractionImpB::~ConcreateAbstractionImpB(){}
void ConcreateAbstractionImpB::Opration()
{
	std::cout<<"ConcreateAbstractionImp...\n";
}

