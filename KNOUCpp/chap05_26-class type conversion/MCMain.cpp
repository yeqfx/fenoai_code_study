#include <iostream>
#include "Feet.h"
#include "Meter.h"
using namespace std;

int main()
{
    Meter mLen(10, 50);
    Feet fLen = mLen;
    mLen.display();
    fLen.display();

    return 0;
}