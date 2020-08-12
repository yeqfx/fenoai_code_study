#include <iostream>
#include "CalcVariacneWithFunction.h"
using namespace std;

int main()
{
    double a[50], b[100];

    for (int i = 0; i < sizeof(a) / sizeof(double); i++)
        a[i] = i;

    for (int i = 0; i < sizeof(b) / sizeof(double); i++)
        b[i] = i;

    cout << Variance(a, 50) << endl;
    cout << Variance(b, 100) << endl;

    return 0;
}