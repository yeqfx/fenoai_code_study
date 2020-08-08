#include <iostream>
using namespace std;

class CTest
{
public:
    int m_Value;

    CTest(int arg) {}
    CTest(double arg) {}
};

int main()
{
    int i = 3.14;
    double d = 1;

    CTest t1 = 3.14;
    CTest t2 = 1;

    cout << t1.m_Value << endl;
    cout << t2.m_Value << endl;

    return 0;
}