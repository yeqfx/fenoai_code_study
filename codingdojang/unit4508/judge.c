//ǥ�� �Է����� ���� 1, 000 ������ ���ڿ��� �Էµ˴ϴ�.
//�Էµ� ���ڿ����� "the"�� ������ ����ϴ� ���α׷��� ���弼��
//(scanf �Լ� ȣ�� ���� ���ڿ��� ����ϸ� �� �˴ϴ�).
//��, ��� ���ڰ� �ҹ����� "the"�� ã���� �Ǹ� 
//"them", "there", "their" ���� �������� �ʾƾ� �մϴ�.
//
//scanf���� ������ ������ ���ڿ��� �Է¹������� 
//���� �����ڷ� "%[^\n]s"�� ����ϸ� �˴ϴ�.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[1001];
    scanf("%[^\n]s", s1);
    int count = 0;

    char* ptr = strtok(s1, " .,");
    while (ptr != NULL)
    {
        if(ptr != NULL && strcmp(ptr, "the") == 0) count++;
        ptr = strtok(NULL, " .,");
    }
    printf("%d\n", count);

    return 0;
}