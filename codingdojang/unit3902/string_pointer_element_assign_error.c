#include <stdio.h>

int main()
{
    char* s1 = "Hello";    // �����Ϳ� ���ڿ� Hello�� �ּ� ����
                           // Hello�� �ִ� �޸� �ּҴ� �б� ����

    s1[0] = 'A';           // ���ڿ� �������� �ε��� 0�� ���� A�� �Ҵ�
                           // ���� ����

    printf("%c\n", s1[0]);

    return 0;
}