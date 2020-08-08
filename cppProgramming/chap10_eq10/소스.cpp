#include <iostream>
using namespace std;

class CChild
{
public:
    CChild()
    {
        cout << "CChild Constructor" << endl;
    }

    CChild(const CChild& obj)
    {
        cout << "CChild Copy Constructor" << endl;
    }
};

class CTestA
{
public:
    CTestA()
    {}
    CTestA(const CTestA& obj)
    {}

    CChild m_C;
};

class CTestB
{
public:
    CTestB() {}

    CChild m_C;
};

int main()
{
    // CTestA�� ����� copy constructor �����Ƿ� ��� ������ Ŭ������ �⺻ ������ ȣ��
    CTestA a0;      // "CParent Constructor"
    CTestA a1 = a0; // "CParent Constructor"
    // CTestB�� �Ͻ��� copy constructor�̹Ƿ� ��� ������ Ŭ������ ���� ������ ȣ��
    CTestB b0;      // "CParent Copy Constructor"
    CTestB b1 = b0; // "CParent Copy Constructor"
}