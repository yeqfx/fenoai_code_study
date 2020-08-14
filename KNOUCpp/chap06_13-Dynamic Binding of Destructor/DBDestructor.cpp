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
        cout << "기초 클래스 소멸자 동작" << endl;
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
        cout << "파생 클래스 소멸자 동작" << endl;
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