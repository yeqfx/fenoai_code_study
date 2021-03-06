#include <iostream>
using namespace std;

class CChild
{
public:
    CChild()
    {
        cout << "CParent Constructor" << endl;
    }

    CChild(const CChild& obj)
    {
        cout << "CParent Copy Constructor" << endl;
    }
};

class CTestA : public CChild
{
public:
    CTestA()
    {}
    CTestA(const CTestA& obj)
    {}
};

class CTestB : public CChild
{
public:
    CTestB() {}
};

int main()
{
    // CTestA는 명시적 copy constructor 있으므로 부모 클래스의 기본 생성자 호출
    CTestA a0;      // "CParent Constructor"
    CTestA a1 = a0; // "CParent Constructor"
    // CTestB는 암시적 copy constructor이므로 부모 클래스의 복사 생성자 호출
    CTestB b0;      // "CParent Copy Constructor"
    CTestB b1 = b0; // "CParent Copy Constructor"
}