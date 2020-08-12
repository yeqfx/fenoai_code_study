#include <iostream>
#include "Round.h"
using namespace std;

double Round(double x, int d)
{
    double a = x >= 0 ? 0.5 : -0.5;
    cout << a << endl;
    double pow10 = pow(10, d);
    cout << pow10 << endl;
    cout << x * pow10 << endl;
    cout << x * pow10 + a << endl;
    cout << trunc(x * pow10 + a) << endl;
    cout << trunc(x * pow10 + a) / pow10;

    return trunc(x * pow10 + a) / pow10;
}
