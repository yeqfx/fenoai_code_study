#define _CRT_SECURE_NO_WARNINGS    // scanf ���� ���� ���� ������ ���� ����
#include <stdio.h>

int main()
{
    int count;

    scanf("%d", &count);    // ���� �Է¹���

    for (; count > 0; count--)    // �ʱ갪 ���� scanf���� ����� ������ ���ҽ��Ѽ� �ݺ�
    {
        printf("Hello, world! %d\n", count);
    }

    return 0;
}