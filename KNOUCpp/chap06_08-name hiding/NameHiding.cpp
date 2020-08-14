#include <iostream>
using namespace std;

class A
{
public:
    void f(int x)
    {
        cout << "A::f() --> " << x << endl;
    }
};

class B : public A
{
public:
    void f(double x)
    {
        cout << "B::f() --> " << x << endl;
    }
};

int main()
{
    B objB;
    objB.f(10.0);
    objB.f(20);     // class B�� ���� a::f�� name hiding �߻�
    objB.A::f(20);
}