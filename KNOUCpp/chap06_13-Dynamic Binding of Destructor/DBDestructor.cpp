#include <iostream>
using namespace std;

class BaseClass
{
private:
    int* ptB;
public:
    BaseClass(int n = 10)
    {
        ptB = new int[n];
    }
    virtual ~BaseClass()
    {
        cout << "���� Ŭ���� �Ҹ��� ����" << endl;
        delete[] ptB;
    }
};

class DrvClass : public BaseClass
{
private:
    int* ptD;
public:
    DrvClass(int n1 = 10, int n2 = 10)
        : BaseClass(n1)
    {
        ptD = new int[n2];
    }
    ~DrvClass() override
    {
        cout << "�Ļ� Ŭ���� �Ҹ��� ����" << endl;
        delete[] ptD;
    }
};

int main()
{
    BaseClass* pB1 = new BaseClass(5);
    BaseClass* pB2 = new DrvClass(10, 5);

    delete pB1;
    delete pB2;

    return 0;
}