#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int num1;

    scanf("%d", &num1);

    switch (num1)
    {
    case 1:
    {
        int num2 = num1;
        printf("%d�Դϴ�.\n", num2);
        break;
    }
    case 2:
        printf("2�Դϴ�.\n");
        break;
    default:
        printf("default\n");
        break;
    }
    return 0;
}