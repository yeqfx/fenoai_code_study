#include <iostream>
#include "CounterM.h"
using namespace std;

int main()
{
    CounterM cnt{ 10, 10 };
    cnt.reset();
    cout << "������� ���� �� : " << cnt.getValue() << endl;
    cout << "Max Value : " << cnt.getMaxValue() << endl;
    cnt.count();
    cnt.count();
    cout << "������� ���� �� : " << cnt.getValue() << endl;
    cout << "Max Value : " << cnt.getMaxValue() << endl;
    return 0;
}