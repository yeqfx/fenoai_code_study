#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
    int balance = 10000;    // ����ī�� �ܾ�
    int age;

    scanf("%d", &age);

    if (7 <= age <= 12)
        balance -= 450;
    else if (13 <= age <= 18)
        balance -= 720;
    else if (19 <= age)
        balance -= 1200;

    printf("%d\n", balance);

    return 0;
}