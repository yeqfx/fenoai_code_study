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

    //cout << "두 수를 입력하시오 : ";
    //cin >> a >> b;

    if (a < b) SwapValues(a, b);
    cout << "큰 수 = " << a << " 작은 수 = " << b << endl;

    timer.elapsed();

    return 0;
}