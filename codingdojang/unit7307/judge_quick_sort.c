//ǥ�� �Է����� ���� 10 ������ ���ڿ��� 10�� �Էµ˴ϴ�(�ߺ� ���� �����ϴ�).
//���� �ҽ� �ڵ带 �ϼ��Ͽ� �Էµ� ���ڿ��� ������������ ���ĵǵ��� ���弼��.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void* a, const void* b)
{
    return strcmp((char*) b, (char*)a);
}

int main()
{
    char s1[10][20];

    scanf("%s %s %s %s %s %s %s %s %s %s",
        s1[0], s1[1], s1[2], s1[3], s1[4], s1[5], s1[6], s1[7], s1[8], s1[9]
    );

    qsort(s1, sizeof(s1) / sizeof(s1[0]), sizeof(s1[0]), compare);

    for (int i = 0; i < 10; i++)
    {
        printf("%s ", s1[i]);
    }

    printf("\n");

    return 0;
}