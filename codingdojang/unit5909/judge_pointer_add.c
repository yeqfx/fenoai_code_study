#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    short* numPtrA;
    short* numPtrB;
    short* numPtrC;

    scanf("%p", &numPtrA);

    numPtrB = numPtrA + 3;
    numPtrC = numPtrA + 5;

    printf("%X\n", (unsigned int)numPtrB);
    printf("%X\n", (unsigned int)numPtrC);

    return 0;
}