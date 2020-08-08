#include <iostream>
using namespace std;

class CChild
{
public:
    int m_Value = 1;
};

class CTest : public CChild
{
public:
    int m_Value = 2;
};

int main()
{
    CTest t;
    cout << t.CChild::m_Value << endl;
}