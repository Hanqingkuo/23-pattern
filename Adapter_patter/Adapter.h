#ifndef _ADAPTER_H
#define _ADAPTER_H_
class Target
{
public:
	Target();
	~Target();
	virtual void Request();
protected:
private:
};

class Adaptee
{
public:
	Adaptee();
	~Adaptee();
	void SpecificRequst();
protected:
private:
};

class Adapter : public Target,private Adaptee
{
public:
	Adapter();
	~Adapter();
	void Request();
protected:
private:
};

#endif