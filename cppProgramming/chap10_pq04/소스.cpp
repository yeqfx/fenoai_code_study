#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class CLength
{
public :
    CLength(const char* l)
    {
        strcpy(m_l, l);
    }

    size_t GetLength()
    {
        return strlen(m_l);
    }

    char m_l[20] = { 0 };
};

int main()
{
    CLength l = "abc";
    cout << l.GetLength() << endl;

    return 0;
}