#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int num3;

    scanf("%d %d %d", &num1, &num2, &num3);
    //num1과 num2를 더하기
    //1번 결과에 10을 곱하기
    //2번 결과에서 num3을 빼기

    printf("%d\n", (num1 + num2) * 10 - num3);

    return 0;
}