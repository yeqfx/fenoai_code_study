#include <iostream>
using namespace std;

int main()
{
    int a = 1;      // int a = 1로 초기화

    int& al_ref = a;  // l-value 참조변수를 a 로 초기화
    int&& ar_ref = 1; // r-value 참조변수를 1로 초기화

    cout << "a : " << a << ", ";
    cout << "al_ref : " << al_ref << ", ";
    cout << "ar_ref : " << ar_ref << endl;
    cout << endl;

    cout << "a의 주소 : " << (uintptr_t)&a << ", ";
    cout << "al_ref의 주소 : " << (uintptr_t)&al_ref << ", ";
    cout << "ar_ref의 주소 : " << (uintptr_t)&ar_ref << endl;
    cout << endl;

    cout << "b를 선언하고 r-value를 초기화 한 후 b에 대입" << endl;
    cout << "int b;" << endl;
    cout << "int& bl_ref = b;" << endl;
    cout << "int&& br_ref = 2;" << endl;
    cout << "b = br_ref;" << endl;

    int b;
    int& bl_ref = b;
    int&& br_ref = 2;
    b = br_ref;
    cout << endl;

    cout << "b : " << b << ", ";
    cout << "al_ref : " << bl_ref << ", ";
    cout << "br_ref : " << br_ref << endl;

    cout << "b의 주소 : " << (uintptr_t)&b << ", ";
    cout << "bl_ref의 주소 : " << (uintptr_t)&bl_ref << ", ";
    cout << "br_ref의 주소 : " << (uintptr_t)&br_ref << endl;

    return 0;
}