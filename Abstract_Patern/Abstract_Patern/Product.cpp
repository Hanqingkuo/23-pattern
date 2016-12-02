#include "Product.h"
#include <iostream>
AbstractProductA::AbstractProductA(){}
AbstractProductA::~AbstractProductA(){}
AbstractProductB::AbstractProductB(){}
AbstractProductB::~AbstractProductB(){}

ProductA1::ProductA1()
{
	std::cout<<"productA1...\n";
}
ProductA1::~ProductA1()
{

}
ProductA2::ProductA2()
{
	std::cout<<"productA2...\n";
}
ProductA2::~ProductA2()
{

}
ProductB1::ProductB1()
{
	std::cout<<"ProductB1...\n";
}
ProductB1::~ProductB1()
{

}
ProductB2::ProductB2()
{
	std::cout<<"ProductB2...\n";
}
ProductB2::~ProductB2()
{

}
