#include <iostream>
#include "number.h"
#include "realnumber.h"
#include "complexnumber.h"

using namespace std;

int main()
{
    RealNumber theone(9.99999);
    RealNumber thenext(8.88888);
    Number* result = new RealNumber(theone.add(thenext));
    result->print();
    ComplexNumber one(5,6);
    ComplexNumber two(3,4);
    Number* product = new ComplexNumber(one.mul(two));
    product->print();
    delete result,product;
    return 0;
}
