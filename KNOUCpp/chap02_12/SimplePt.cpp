#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int* ptr = nullptr;

    cout << "ptr : " << ptr << endl;
    //cout << "*ptr : " << *ptr << endl;
    cout << "&ptr : " << (uintptr_t)&ptr << endl;

    ptr = &a;
    cout << "ptr�� ����Ű�� �� : " << *ptr << endl;
    *ptr = 20;
    cout << "���� a�� �� : " << a << endl;
    return 0;
}