#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    printf("%lu", rand());

    int i = 0;
    while (i != 3)
    {
        i = rand() % 10;
        printf("%d\n", i);
    }

    return 0;
}