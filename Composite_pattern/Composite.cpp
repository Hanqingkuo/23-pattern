#include "Composite.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

Composite::Composite(){}
Composite::~Composite(){}
void Composite::Add( Composite* ){}
void Composite::Remove( Composite*){}
Composite* Composite::GetChild(int)
{
	return NULL;
}

Leaf::Leaf(){}
Leaf::~Leaf(){}
void Leaf::Operation()
{
	std::cout<<"Leaf Operation...\n";
}

Component::Component(){}
Component::~Component(){}
void Component::Add( Composite* com)
{
	comVec.push_back(com);
}
void Component::Remove( Composite *com)
{
	typedef vector<Composite*>::iterator Iterator;
	Iterator f = std::find<Iterator,Composite*>(comVec.begin(),comVec.end(),com);
	comVec.erase(f);
}

Composite* Component::GetChild(int index)
{
	return comVec[index];
}
void Component::Operation()
{
	vector<Composite*>::iterator comIter = comVec.begin();
	for(; comIter != comVec.end(); ++comIter)
	{
		(*comIter)->Operation();
	}
}