#include <iostream>
using namespace std;

class CTest
{
public:
    static void SFunc()
    {
        cout << "SFunc" << endl;
    }
};

int main()
{
    CTest t;
    t.SFunc();

    CTest* pT;
    pT->SFunc();

    CTest::SFunc();

    return 0;
}