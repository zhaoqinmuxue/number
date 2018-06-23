#include "complexnumber.h"

void ComplexNumber::print()
{
    cout << a << "+" << b << "i" << endl;
}

ComplexNumber ComplexNumber::add(const ComplexNumber& other)
{
    return ComplexNumber(a+other.a,b+other.b);
}

ComplexNumber ComplexNumber::mul(const ComplexNumber& other)
{
    return ComplexNumber(a*other.a-b*other.b,a*other.b+b*other.a);
}
