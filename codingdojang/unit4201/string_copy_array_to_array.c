#define _CRT_SECURE_NO_WARNINGS    // strcpy ���� ���� ���� ������ ���� ����
#include <stdio.h>
#include <string.h>    // strcpy �Լ��� ����� ��� ����

int main()
{
    char s1[10] = "Hello";    // ũ�Ⱑ 10�� char�� �迭�� �����ϰ� ���ڿ� �Ҵ�
    char s2[10];              // ũ�Ⱑ 10�� char�� �迭�� ����
    char* s2ptr;
    s2ptr = strcpy(s2, s1);        // s1�� ���ڿ��� s2�� ����

    printf("%s\n", s2);    // Hello

    printf("�������ڿ��� ������ : %p\n", &s1);    // �������ڿ��� ������
    printf("����ڿ��� ������ : %p\n", &s2);    // ����ڿ��� ������
    printf("strcpy ��ȯ ������ : %p\n", &s2);    // strcpy ��ȯ ������

    return 0;
}