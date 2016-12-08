#ifndef _ABSTRACTION_H_
#define _ABSTRACTION_H_
class AbstractionImp;

class Abstraction
{
public:
	virtual ~Abstraction();
	virtual void Opration() = 0;
protected:
	Abstraction();
private:
};

class RefinedAbstraction : public Abstraction
{
public:
	RefinedAbstraction(AbstractionImp *_mp);
	~RefinedAbstraction();
	void Opration();
protected:
private:
	AbstractionImp* imp;
};

#endif