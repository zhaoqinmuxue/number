#ifndef NUMBER_H
#define NUMBER_H

#include <iostream>
using namespace std;

class Number
{
    public:
	Number(){}
	~Number(){}
        virtual void print(){}
    	Number add(const Number& other){}
 	Number mul(const Number& other){}
};

#endif
