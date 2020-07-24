#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char ch;

    scanf("%c", &ch);

    if (ch != 'k') printf("Âü\n");
    else printf("°ÅÁþ\n");
    if (ch > 'h') printf("Âü\n");
    else printf("°ÅÁþ\n");
    if (ch <= 'o') printf("Âü\n");
    else printf("°ÅÁþ\n");

    return 0;
}