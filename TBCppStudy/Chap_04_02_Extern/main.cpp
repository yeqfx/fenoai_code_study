#include <iostream>
#include "MyConstants.h"

using namespace std;

// forward declaration
extern void doSomething();
extern int a;

int main()
{
    doSomething();

    cout << a << endl;

    cout << "In main.cpp " << Constants::PI << " " << &Constants::PI << endl;

    return 0;
}