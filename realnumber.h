#ifndef REALNUMBER_H
#define REALNUMBER_H

#include "number.h"

class RealNumber:public Number
{
    private:
    	double value;
    public:
        RealNumber(double a = 0):value(a){}
	~RealNumber(){}
	virtual void print();
	RealNumber add(const RealNumber& other);
	RealNumber mul(const RealNumber& other);
};

#endif
