#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
    int num1 = 11;
    float num2 = 4.4f;
    auto num3 = num1 + num2;
    cout << num1 + num2 << " " << typeid(num1 + num2).name() << endl;
    cout << num1 << " " << &num1 << endl;
    cout << num2 << " " << &num2 << " " <<  endl;
    cout << num3 << " " << &num3 << " " << &num3 - &num2 << endl;

    int num4 = 10;
    long long num5 = 123456789000;
    auto num6 = num4 + num5;
    cout << num4 + num5 << " " << typeid(num4 + num5).name() << endl;
    cout << num4 << " " << &num4 << endl;
    cout << num5 << " " << &num5 << " " << endl;
    cout << num6 << " " << &num6 << " " << &num6 - &num5 << endl;



    // C type, C++ type, static_cast로 casting 하면 어느 주소에 저장될까
    auto a = 1, b = 2, c = 3;
    auto d = 1.0f, e = 2.0f, f = 3.0f;

    cout << a << " : " << &a << endl;
    cout << b << " : " << &b << " : " << &b - &a << endl;
    cout << c << " : " << &c << " : " << &c - &b << endl;

    cout << a << " : " << typeid(a).name() << endl;

    cout << d << " : " << &d << endl;
    cout << e << " : " << &e << " : " << &e - &d << endl;
    cout << f << " : " << &f << " : " << &f - &e << endl;

    cout << d << " : " << typeid(d).name() << endl;

    a = (float)a;
    b = float(b);
    c = static_cast<float>(c);
    d = (int)d;
    e = int(e);
    f = static_cast<int>(f);

    cout << a << " : " << &a << endl;
    cout << b << " : " << &b << " : " << &b - &a << endl;
    cout << c << " : " << &c << " : " << &c - &b << endl;

    cout << a << " : " << typeid(a).name() << endl;
    cout << b << " : " << typeid(b).name() << endl;
    cout << c << " : " << typeid(c).name() << endl;

    cout << d << " : " << &d << endl;
    cout << e << " : " << &e << " : " << &e - &d << endl;
    cout << f << " : " << &f << " : " << &c - &b << endl;

    cout << d << " : " << typeid(d).name() << endl;
    cout << e << " : " << typeid(e).name() << endl;
    cout << f << " : " << typeid(f).name() << endl;

    return 0;
}