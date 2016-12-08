#ifndef _PROXY_H_
#define _PROXY_H_

class Subject
{
public:
	virtual ~Subject();
	virtual void Request();
protected:
	Subject();
};

class ConcreateSubject : public Subject
{
public:
	ConcreateSubject();
	~ConcreateSubject();
	void Request();
protected:
private:
};

class Proxy
{
public:
	Proxy(Subject*);
	~Proxy();
	void Request();
private:
	Subject* sub;
};
#endif