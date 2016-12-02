#ifndef _PRODUCT_H_
#define _PRODUCT_H_
class Product
{
public:
	virtual ~Product();
protected:
	Product();
private:
};
class ConcreateProduct:public Product
{
public:
	~ConcreateProduct();
	ConcreateProduct();
protected:
private:

};
#endif