#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int start, stop;
    scanf("%d %d", &start, &stop);

    for (int i = start; i <= stop; i++)
    {
        if (i % 5 == 0 && i % 11 == 0) printf("FizzBuzz\n");
        else if (i % 5 == 0) printf("Fizz\n");
        else if (i % 11 == 0) printf("Buzz\n");
        else (printf("%d\n", i));
    }
    return 0;
}