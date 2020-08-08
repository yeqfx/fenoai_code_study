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
    // CTestA�� ����� copy constructor �����Ƿ� �θ� Ŭ������ �⺻ ������ ȣ��
    CTestA a0;      // "CParent Constructor"
    CTestA a1 = a0; // "CParent Constructor"
    // CTestB�� �Ͻ��� copy constructor�̹Ƿ� �θ� Ŭ������ ���� ������ ȣ��
    CTestB b0;      // "CParent Copy Constructor"
    CTestB b1 = b0; // "CParent Copy Constructor"
}