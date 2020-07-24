#include <stdio.h>
#include <stdlib.h>

int main()
{
    char* s1 = malloc(sizeof(char) * 10);

    s1 = "abcde\0";
    printf("%c\n", s1[0]);
    s1[0] = 'f';

    printf("%s\n", s1);

    free(s1);

    return 0;
}