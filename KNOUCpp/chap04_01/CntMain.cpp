#include <iostream>
#include "Counter.h"
using namespace std;

int main()
{
    Counter cnt;
    cnt.reset();
    cout << "������� ���� �� : " << cnt.getValue() << endl;
    cnt.count();
    cnt.count();
    cout << "������� ���� �� : " << cnt.getValue() << endl;
    return 0;
}