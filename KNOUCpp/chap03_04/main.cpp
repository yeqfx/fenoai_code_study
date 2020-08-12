#include <iostream>
#include "SwapInt.h"
using namespace std;

int main()
{
    int a, b;

    cout << "두 수를 입력하시오 : ";
    cin >> a >> b;

    if (a < b) SwapValues(a, b);
    cout << "큰 수 = " << a << " 작은 수 = " << b << endl;

    return 0;
}