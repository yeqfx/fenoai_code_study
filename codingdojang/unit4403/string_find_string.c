#include <stdio.h>
#include <string.h>    // strstr �Լ��� ����� ��� ����

int main()
{
    //char s1[30] = "A Garden Diary";     // ũ�Ⱑ 30�� char�� �迭�� �����ϰ� ���ڿ� �Ҵ�

    //char* ptr = strstr(s1, "den");      // den���� �����ϴ� ���ڿ� �˻�, ������ ��ȯ

    //printf("%s\n", ptr);    // den Diary
    char s1[100] = "A Garden Diary A Garden Diary A Garden Diary";

    printf("%p\n", s1);

    char* ptr = strstr(s1, "den");     // den���� �����ϴ� ���ڿ� �˻�, ������ ��ȯ
    printf("%p\n", ptr);

    while (ptr != NULL)                // �˻��� ���ڿ��� ���� ������ �ݺ�
    {
        printf("%s\n", ptr);           // �˻��� ���ڿ� ���
        printf("%p\n", ptr);
        ptr = strstr(ptr + 1, "den");  // den �����Ϳ� 1�� ���Ͽ� e���� �˻�
        printf("%p\n", ptr);
    }
    return 0;
}