#include <iostream>
#include "CharStack.h"
using namespace std;

int main()
{
    CharStack chStack;
    char str[20];

    cout << "���� �ܾ �Է��Ͻÿ� : ";
    cin >> str;

    char* pt = str;
    while (*pt)
        chStack.push(*(pt++));

    cout << "���� �ܾ� ��� : ";
    while (!chStack.chkEmpty())
        cout << chStack.pop();
    cout << endl;
    return 0;
}