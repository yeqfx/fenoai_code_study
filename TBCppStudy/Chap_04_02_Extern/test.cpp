#include <iostream>
#include "MyConstants.h"

int a = 1;

void doSomething()
{
    using namespace std;

    cout << "Hello" << endl;

    cout << "In test.cpp " << Constants::PI << " " << &Constants::PI << endl;
}