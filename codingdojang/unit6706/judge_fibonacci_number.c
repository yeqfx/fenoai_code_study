//ǥ�� �Է����� ���� �� ���� �Էµ˴ϴ�(�Է� ���� ������ 10~30).
//���� �ҽ� �ڵ带 �ϼ��Ͽ� �Էµ� ������ �ش��ϴ� �Ǻ���ġ ���� ��µǰ� ���弼��.
//
//�Ǻ���ġ ���� 0�� 1�� �����ϸ�, 
//���� �� �Ǻ���ġ ���� �ٷ� ���� �� �Ǻ���ġ ���� ���Դϴ�.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fib(int n)
{
    if (n == 0 || n == 1) 
        return n;
    else
        return fib(n - 1) + fib(n - 2);
}

int main()
{
    int num1;

    scanf("%d", &num1);

    printf("%d\n", fib(num1));

    return 0;
}