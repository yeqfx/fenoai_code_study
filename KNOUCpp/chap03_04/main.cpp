#include <iostream>
#include "SwapInt.h"
using namespace std;

int main()
{
    int a, b;

    cout << "�� ���� �Է��Ͻÿ� : ";
    cin >> a >> b;

    if (a < b) SwapValues(a, b);
    cout << "ū �� = " << a << " ���� �� = " << b << endl;

    return 0;
}