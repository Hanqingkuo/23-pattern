#ifndef _ABSTRACTIONIMP_H_
#define _ABSTRACTIONIMP_H_
class AbstractionImp
{
public:
	virtual ~AbstractionImp();
	virtual void Opration() = 0;
protected:
	AbstractionImp();
private:
};

class ConcreateAbstractionImpA : public AbstractionImp
{
public:
	ConcreateAbstractionImpA();
	~ConcreateAbstractionImpA();
	void Opration();
protected:
private:
};

class ConcreateAbstractionImpB : public AbstractionImp
{
public:
	ConcreateAbstractionImpB();
	~ConcreateAbstractionImpB();
	void Opration();
protected:
private:

};

#endif