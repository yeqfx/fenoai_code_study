//ǥ�� �Է����� ���� �ϳ��� �Էµ˴ϴ�.
//�Էµ� ���ں��� z���� ������� ����ϴ� ���α׷��� ���弼��
//(scanf �Լ� ȣ�� ���� ���ڿ��� ����ϸ� �� �˴ϴ�).
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);
    
    for (char i = ch; i <= 'z'; i++)
    {
        printf("%c", i);
    }

    return 0;
}