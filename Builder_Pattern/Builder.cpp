#include "Builder.h"
#include "Product.h"
#include <iostream>

Builder::Builder(){}
Builder::~Builder(){}
ConcreateBuilder::ConcreateBuilder()
{

}
ConcreateBuilder::~ConcreateBuilder()
{

}
void ConcreateBuilder::BuildPartA(const string &buildPara)
{
	std::cout<<"step1 Build PartA..."<<buildPara<<"\n";
}
void ConcreateBuilder::BuildPartB(const string &buildPara)
{
	std::cout<<"step1 Build PartB..."<<buildPara<<"\n";
}
void ConcreateBuilder::BuildPartC(const string &buildPara)
{
	std::cout<<"step1 Build PartC..."<<buildPara<<"\n";
}

Product* ConcreateBuilder::GetProduct()
{
	BuildPartA("pre-defined");
	BuildPartB("pre-defined");
	BuildPartC("pre-defined");
	return new Product();
}
