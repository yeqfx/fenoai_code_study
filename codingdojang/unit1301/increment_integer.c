#include <stdio.h>

int main()
{
    int num1 = 2;
    int num2 = 2;

    printf("%d %d\n", num1++, num2--);    // 2 2: num1, num2�� ���� ���� ����� �� ���� ������ ����
    printf("%d %d\n", num1, num2);        // 3 1: ���� �����ڰ� ������ ���

    int num3 = 2;
    num3 = num3++ + ++num3;
    printf("%d\n", num3);

    int kor = 90, eng = 80, math = 70, total;
    total = ++kor + eng-- + math++;
    printf("%d\n", total);

    return 0;
}