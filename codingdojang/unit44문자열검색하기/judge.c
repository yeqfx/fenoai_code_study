#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
    char s1[1001];
    int n = 0;
    scanf("%[^\n]s", s1);

    char* ptr = strchr(s1, ' ');
    //n += 1;
    while (ptr != NULL)
    {
        n += 1;
        ptr = strchr(ptr + 1, ' ');
    }
    printf("%d", n);
    return 0;
}