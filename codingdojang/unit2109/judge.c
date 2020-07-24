#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    if (a && b) printf("Âü\n");
    else printf("°ÅÁş\n");

    if (a || b) printf("Âü\n");
    else printf("°ÅÁş\n");

    if (!a) printf("Âü\n");
    else printf("°ÅÁş\n");

    return 0;
}