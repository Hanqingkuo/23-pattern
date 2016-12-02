#include "Director.h"
#include "Builder.h"

Director::Director(Builder* _bld)
{
	bld = _bld;
}
Director::~Director()
{

}
void Director::Construct()
{
	bld->BuildPartA("user-defined");
	bld->BuildPartB("user-defined");
	bld->BuildPartC("user-defined");
}