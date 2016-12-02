#ifndef _FACTORY_H_
#define _FACTORY_H_

class AbstractProductA;
class AbstractProductB;

class AbstractFactory
{
public:
	~AbstractFactory();
	virtual AbstractProductA*CreateProductA() = 0;
	virtual AbstractProductB*CreateProductB() = 0;
protected:
	AbstractFactory();
private:	
};

class ConcreateFactory1 : public AbstractFactory
{
public:
	ConcreateFactory1();
	~ConcreateFactory1();
	AbstractProductA* CreateProductA();
	AbstractProductB* CreateProductB();
protected:
private:
};

class ConcreateFactory2 : public AbstractFactory
{
public:
	ConcreateFactory2();
	~ConcreateFactory2();
	AbstractProductA*CreateProductA();
	AbstractProductB*CreateProductB();
protected:
private:
};

#endif