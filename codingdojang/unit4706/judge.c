//ǥ�� �Է����� ������ ���� 10 ������ ���ڿ��� �Էµ˴ϴ�.
//�Էµ� ���ڿ��� ������ŭ ���� ������ N - gram�� ����ϴ� ���α׷��� ���弼��
//(scanf �Լ� ȣ�� ���� ���ڿ��� ����ϸ� �� �˴ϴ�
//���� �Էµ� ���ڿ��� ���̰� �Էµ� ���� �̸��̶�� wrong�� ����ϼ���.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    int n, length;
    char s1[11];

    scanf("%d %s", &n, s1);
    length = strlen(s1);

    if (length < n) printf("wrong");

    for (int i = 0; i < length - (n - 1); i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%c", s1[i + j]);
        }
        printf("\n");
    }

    return 0;

}