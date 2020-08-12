#include <iostream>
using namespace std;

int main()
{
    int a = 1;      // int a = 1�� �ʱ�ȭ

    int& al_ref = a;  // l-value ���������� a �� �ʱ�ȭ
    int&& ar_ref = 1; // r-value ���������� 1�� �ʱ�ȭ

    cout << "a : " << a << ", ";
    cout << "al_ref : " << al_ref << ", ";
    cout << "ar_ref : " << ar_ref << endl;
    cout << endl;

    cout << "a�� �ּ� : " << (uintptr_t)&a << ", ";
    cout << "al_ref�� �ּ� : " << (uintptr_t)&al_ref << ", ";
    cout << "ar_ref�� �ּ� : " << (uintptr_t)&ar_ref << endl;
    cout << endl;

    cout << "b�� �����ϰ� r-value�� �ʱ�ȭ �� �� b�� ����" << endl;
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

    cout << "b�� �ּ� : " << (uintptr_t)&b << ", ";
    cout << "bl_ref�� �ּ� : " << (uintptr_t)&bl_ref << ", ";
    cout << "br_ref�� �ּ� : " << (uintptr_t)&br_ref << endl;

    return 0;
}