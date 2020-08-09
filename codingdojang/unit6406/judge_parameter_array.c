//표준 입력으로 정수 10개가 입력됩니다.
//다음 소스 코드를 완성하여 입력된 정수가 반대 순서로 출력되게 만드세요
//(각 정수는 공백으로 구분하여 출력합니다).

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printReverse(int numArr[], int length)
{
    for (int i = length - 1; i >= 0; i--)
    {
        printf("%d ", numArr[i]);
    }
    printf("\n");
}


int main()
{
    int numArr[10];

    scanf("%d %d %d %d %d %d %d %d %d %d",
        &numArr[0], &numArr[1], &numArr[2], &numArr[3], &numArr[4],
        &numArr[5], &numArr[6], &numArr[7], &numArr[8], &numArr[9]
    );

    printReverse(numArr, sizeof(numArr) / sizeof(int));

    return 0;
}