#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int decimal;
    int binary[20] = { 0, };
    
    printf("�������� ��ȯ�� ���ڸ� �������� : ");
    scanf("%d", &decimal);

    int position = 0;
    while (1)
    {
        binary[position] = decimal % 2;
        decimal /= 2;

        position++;
        
        if (decimal == 0)
            break;
    }

    for (int i = position - 1; i >= 0; i--)
        printf("%d", binary[i]);
    
    printf("\n");

    return 0;
}