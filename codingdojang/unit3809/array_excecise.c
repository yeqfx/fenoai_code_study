#include <stdio.h>

int main()
{
    char *charPtr = "01234";

    charPtr[1] = '5';

    printf("%c", charPtr[1]);
    return 0;
}