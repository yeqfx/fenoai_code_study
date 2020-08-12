#include <iostream>
#include "Timer.h"
using namespace std;

inline void SwapValues(int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    Timer timer;

    int a = 10, b = 20;

    //cout << "�� ���� �Է��Ͻÿ� : ";
    //cin >> a >> b;

    if (a < b) SwapValues(a, b);
    cout << "ū �� = " << a << " ���� �� = " << b << endl;

    timer.elapsed();

    return 0;
}