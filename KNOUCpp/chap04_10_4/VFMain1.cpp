// 위임 생성자 delegating constructor

#include <iostream>
#include <initializer_list>
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
    float b[4] = { 1.0f, 2.0f, 3.0f, 4.0f };
    VecF v3(4, b);
    v3.print();
    cout << endl;
    VecF v4{ 2.0f, 4.0f, 6.0f, 8.0f };
    v4.print();

    return 0;
}