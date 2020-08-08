#include <iostream>
using namespace std;

class CTest
{
public:
    CTest() : m_Const { 1 }, m_Ref{m_Value}
    {}

    int m_Value = 0;
    const int m_Const;
    int& m_Ref;
};

int main()
{
    CTest t;

    cout << "m_Value : " << t.m_Value << endl;
    cout << "m_Const : " << t.m_Const << endl;
    cout << "m_Ref   : " << t.m_Ref << endl;

    return 0;
}