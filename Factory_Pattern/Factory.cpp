#include "Factory.h"
#include "Product.h"
#include <iostream>

Factory::Factory()
{

}
Factory::~Factory()
{

}
ConcreteFactory::ConcreateFactory()
{
	std::cout<<"ConcreateFactory\n";
}
ConcreteFactory::~ConcreteFactory()
{

}
Product* ConcreteFactory::CreatePeoduct()
{
	return new ConcreateProduct();
}