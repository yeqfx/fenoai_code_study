//ǥ�� �Է����� ������ ���Ե� ���� 30 ������ ���� ���ڿ��� �Էµ˴ϴ�
//(������ ���� �� ���ӵ� ���� �ֽ��ϴ�).
//�Էµ� ���ڿ��� ȸ���̸� 1, ȸ���� �ƴϸ� 0�� ����ϴ� ���α׷��� ���弼��
//(scanf �Լ� ȣ�� ���� ���ڿ��� ����ϸ� �� �˴ϴ�).
//
//scanf���� ������ ������ ���ڿ��� �Է¹�������
//���� �����ڷ� "%[^\n]s"�� ����ϸ� �˴ϴ�.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() 
{
    char s1[31];
    char s2[31];
    char* sArr[30] = { NULL, };
    int i = 0;
    bool isPalindrome = true;

    scanf("%[^\n]s", s1);
    char *ptr = strtok(s1, " ");

    while (ptr != NULL)
    {
        strcat(s2, ptr);
        i++;

        ptr = strtok(NULL, " ");
    }
    int length  = strlen(s2);

    for (int i = 0; i < length / 2; i++)
    {
        if (s2[i] != s2[length - 1 - i])
        {
            isPalindrome = false;
            break;
        }
    }
    printf("%d\n", isPalindrome);

    return 0;
}