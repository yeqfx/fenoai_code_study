#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = n-1; j >= 0 ; j--)
        {
            if (j > i)
                printf(" ");
            else
                printf("*");
        }

        for (int j = 0; j < n-1; j++)
        {
            if (j < i)
                printf("*");
        }
        printf("\n");
    }



    return 0;
}