#include <stdio.h>

// ���� �Լ�
int add(int a, int b)    // int�� ��ȯ��, int�� �Ű����� �� ��
{
    return a + b;
}

// ���� �Լ�
int mul(int a, int b)    // int�� ��ȯ��, int�� �Ű����� �� ��
{
    return a * b;
}

int main()
{
    int (*fp)(int, int);    // int�� ��ȯ��, int�� �Ű����� �� ���� �ִ� �Լ� ������ fp ����

    fp = add;                      // add �Լ��� �޸� �ּҸ� �Լ� ������ fp�� ����
    printf("%d\n", fp(10, 20));    // 30: �Լ� �����ͷ� add �Լ��� ȣ���Ͽ� ���� ����

    fp = mul;                      // mul �Լ��� �޸� �ּҸ� �Լ� ������ fp�� ����
    printf("%d\n", fp(10, 20));    // 200: �Լ� �����ͷ� mul �Լ��� ȣ���Ͽ� ���� ����

    return 0;
}