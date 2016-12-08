#ifndef _COMPOSITE_H_
#define _COMPOSITE_H_
#include <vector>
class Composite
{
public:
	virtual ~Composite();
	Composite();
	virtual void Add( Composite* );
	virtual void Remove( Composite*);
	virtual void Operation() = 0;
	virtual Composite* GetChild(int );
protected:
private:

};

class Leaf : public Composite
{
public:
	Leaf();
	~Leaf();
	void Operation();
	
protected:
private:
};

class Component : public Composite
{
public:
	Component();
	~Component();
	void Operation();
	void Add( Composite* );
	void Remove( Composite *);
	Composite* GetChild(int);
protected:
private:
	std::vector<Composite*> comVec;
};
#endif