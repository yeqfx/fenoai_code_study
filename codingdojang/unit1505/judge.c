#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int x, a, b, c, d, e;
    scanf("%d", &x);
    a = x % 10;
    x /= 10;
    b = x % 10;
    x /= 10;
    c = x % 10;
    x /= 10;
    d = x % 10;
    x /= 10;
    e = x % 10;
    printf("%d %d %d %d %d", a, b, c, d, e);

    return 0;
}