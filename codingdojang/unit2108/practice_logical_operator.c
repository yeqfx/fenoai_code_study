#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char ch;

    scanf("%c", &ch);

    if (ch != 'k') printf("��\n");
    else printf("����\n");
    if (ch > 'h') printf("��\n");
    else printf("����\n");
    if (ch <= 'o') printf("��\n");
    else printf("����\n");

    return 0;
}