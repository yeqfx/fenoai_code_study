// ���� ������ delegating constructor

#include <iostream>
#include "VecF.h"
using namespace std;

int main()
{
    float a[3] = { 1, 2, 3 };
    VecF v1{ 3, a };
    VecF v2 = v1;
    v1.print();
    cout << endl;
    v2.print();
    cout << endl;

    return 0;
}