#include <iostream>
#include "ProcTab.h"
using namespace std;

void PrString(const char* str, int tabLen)
{
    int col = 0;
    while (*str)
    {
        if (*str == '\t')
        {
            int n = (col / tabLen + 1) * tabLen;
            for (; col < n; col++)
                cout << ' ';
        }
        else
        {
            cout << *str;
            col++;
        }
        str++;
    }
    cout << endl;
}
