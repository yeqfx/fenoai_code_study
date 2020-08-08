#include <iostream>
using namespace std;

class CTest
{
public:
    static int s_Value;

};

int CTest::s_Value = 1;

int main()
{
    cout << "CTest::s_Value : " << CTest::s_Value << endl;

    return 0;
}