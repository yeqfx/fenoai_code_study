#include <iostream>
using namespace std;

typedef int(*ARRAY2D_POINTER)[2][3];

int g_Arr[2][3];

ARRAY2D_POINTER func(int arg)
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            g_Arr[i][j] = arg;
        }
    }
    return &g_Arr;
}

void main()
{
    cout << (*func(7))[0][0] << endl;
    cout << (*func(7))[1][2] << endl;
}