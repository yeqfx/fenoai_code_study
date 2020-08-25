#define _CRT_SECURE_NO_WARNINGS    // fopen ���� ���� ���� ������ ���� ����
#include <stdio.h>     // fopen, fseek, ftell, fclose �Լ��� ����� ��� ����

int main()
{
    int size;

    FILE* fp = fopen("hello.txt", "r");    // hello.txt ������ �б� ���(r)�� ����.
                                           // ���� �����͸� ��ȯ

    fseek(fp, 0, SEEK_END);    // ���� �����͸� ������ ������ �̵���Ŵ
    size = ftell(fp);          // ���� �������� ���� ��ġ�� ����

    printf("%d\n", size);      // 13

    fclose(fp);

    return 0;
}