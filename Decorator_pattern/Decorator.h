#ifndef _DECORATOR_H_
#define _DECORATOR_H_

class Conponent
{
public:
	virtual ~Conponent();
	virtual void Operation();
protected:
	Conponent();
private:
};

class ConcreateConponent : public Conponent
{
public:
	~ConcreateConponent();
	ConcreateConponent();
	void Operation();
protected:
private:
};
class Decorator : public Conponent
{
public:
	Decorator(Conponent* ptr);
	virtual ~Decorator();
	void Operation();
protected:
	Conponent* Cptr;
private:
};

class ConcreateDecorator : public Decorator
{
public:
	ConcreateDecorator(Conponent *ptr);
	~ConcreateDecorator();
	void Operation();
	void AddedBehavior();
protected:
private:
};

#endif