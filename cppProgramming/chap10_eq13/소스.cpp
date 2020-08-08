#include <iostream>
using namespace std;

class CChild
{
public:
    CChild()
    {
        cout << "CChild A" << endl;
    }

    CChild(int arg)
    {
        cout << "CChild B" << endl;
    }
};

class CTest
{
public:
    CTest() : m_C{ 7 }
    {}

    CChild m_C;
};

int main()
{
    CTest t;
}