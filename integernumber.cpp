#include "integernumber.h"

void IntegerNumber::print()
{
    cout << value << endl;
}

IntegerNumber IntegerNumber::add(const IntegerNumber& other)
{
    return IntegerNumber(value+other.value);
}

IntegerNumber IntegerNumber::mul(const IntegerNumber& other)
{
    return IntegerNumber(value*other.value);
}
