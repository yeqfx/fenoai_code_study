#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class CIntToStr
{

public:
    CIntToStr(int i)
    {
        _itoa(i, m_Str, 10);
    }

    char m_Str[10];

};

int main()
{
    char* str = CIntToStr(1).m_Str;
    cout << str << endl;

    return 0;
}