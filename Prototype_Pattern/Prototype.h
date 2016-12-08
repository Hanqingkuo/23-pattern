#ifndef _PROTOTYPE_H_
#define _PROTOTYPE_H
class Prototype
{
public:
	virtual ~Prototype();
	virtual Prototype* Clone()const = 0;
protected:
	Prototype();
private:
};

class ConcreatePrototype : public Prototype
{
public:
	ConcreatePrototype();
	ConcreatePrototype(const ConcreatePrototype &cp);
	~ConcreatePrototype();
	Prototype *Clone()const;
protected:
private:
};


#endif