#ifndef INTEGERNUMBER_H
#define INTEGERNUMBER_H

#include "realnumber.h"

class IntegerNumber:public RealNumber
{
    private:
    	int value;
    public:
        IntegerNumber(int a = 0):value(a){}
	~IntegerNumber(){}
	virtual void print();
	IntegerNumber add(const IntegerNumber& other);
	IntegerNumber mul(const IntegerNumber& other);
};

#endif
