#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int num3;

    scanf("%d %d %d", &num1, &num2, &num3);
    //num1�� num2�� ���ϱ�
    //1�� ����� 10�� ���ϱ�
    //2�� ������� num3�� ����

    printf("%d\n", (num1 + num2) * 10 - num3);

    return 0;
}