#include <iostream>
#include "number.h"
#include "realnumber.h"

using namespace std;

int main()
{
    RealNumber theone(9.9);
    RealNumber thenext(8.8);
    RealNumber result(theone.add(thenext));
    result.print();
    return 0;
}
