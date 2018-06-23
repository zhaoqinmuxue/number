#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H

#include "number.h"

class ComplexNumber:public Number
{
    private:
    	double a;
        double b;
    public:
        ComplexNumber(double aa = 0,double bb = 0):a(aa),b(bb){}
	~ComplexNumber(){}
	virtual void print();
	ComplexNumber add(const ComplexNumber& other);
	ComplexNumber mul(const ComplexNumber& other);
};

#endif
