//ǥ�� �Է����� ���� 30������ ���ڿ��� ������ �Էµ˴ϴ�.
//���� �ҽ� �ڵ带 �ϼ��Ͽ� �Էµ� ���ڿ��� ���ڸ� ������ ���ڿ��� stdout�� ������ ���弼��.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char name[31];
    int order;

    scanf("%s %d", name, &order);

    FILE* fp = stdout;

    fprintf(fp, "The %dth Satellite of Jupiter: %s", order, name);

    fclose(fp);

    return 0;
}