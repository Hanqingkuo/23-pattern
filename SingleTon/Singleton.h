#ifndef _SINGLETON_H_
#define _SINGLETON_H_
#include <iostream>
class Singleton
{
public:
	static Singleton* Instance();
protected:
	Singleton();
private:
	static Singleton*instance;
};
#endif