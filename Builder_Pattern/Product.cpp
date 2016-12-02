#include "Product.h"
#include <iostream>

Product::Product()
{
	ProducePart();
	std::cout<<"return a product\n";
}
Product::~Product(){}

void Product::ProducePart()
{
	std::cout<<"build part of product...\n";
}
ProductPart::ProductPart()
{
	std::cout<<"build ProductPart...\n";
}
ProductPart::~ProductPart()
{

}
ProductPart* ProductPart::BuildPart()
{
	return new ProductPart();
}

