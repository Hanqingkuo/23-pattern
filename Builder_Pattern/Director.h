#ifndef _DIRECTOR_H_
#define _DIRECTOR_H_
class Builder;

class Director
{
public:
	Director(Builder* _bld);
	~Director();
	void Construct();	
protected:
private:
	 Builder *bld;
};



#endif