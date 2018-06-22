#include "realnumber.h"

void RealNumber::print()
{
    cout << value << endl;
}

RealNumber RealNumber::add(const RealNumber& other)
{
    return (value+other.value);
}

RealNumber RealNumber::mul(const RealNumber& other)
{
    return RealNumber(value*other.value);
}
