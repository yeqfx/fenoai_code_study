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
    cout << "ptr이 가리키는 값 : " << *ptr << endl;
    *ptr = 20;
    cout << "변수 a의 값 : " << a << endl;
    return 0;
}