#include <iostream>
using namespace std;

class AClass
{
public:
    virtual void vf() = 0;
    void f1() const
    {
        cout << "Abstract" << endl;
    }
};

class CClass : public AClass
{
public:
    void vf()
    {
        cout << "순수가상함수 구현" << endl;
    }
    void f2() const
    {
        cout << "Concrete" << endl;
    }
};

int main()
{
    CClass objC;
    objC.vf();
    objC.f1();
    objC.f2();

    return 0;
}