#include <iostream>
#include "Round.h"
using namespace std;

int main()
{
    double a;
    cout << "값 = ";
    cin >> a;
    cout << "반올림 --> " << Round(a) << endl;
    cout << "           " << Round(a, 1) << endl;
    cout << "           " << Round(a, 2) << endl;
    cout << "           " << Round(a, 3) << endl;

    return 0;
}