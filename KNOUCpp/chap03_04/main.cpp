#include <iostream>
#include "Timer.h"
#include "SwapInt.h"
using namespace std;

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