#include <stdio.h>
#include "print.h"

extern int num1;

int main()
{
    printf("%d\n", num1);    // ���� ���� num1�� �� ���. ������ ����

    printNumber();

    return 0;
}