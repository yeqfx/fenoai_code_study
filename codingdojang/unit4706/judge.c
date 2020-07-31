//표준 입력으로 정수와 길이 10 이하의 문자열이 입력됩니다.
//입력된 문자열을 정수만큼 문자 단위로 N - gram을 출력하는 프로그램을 만드세요
//(scanf 함수 호출 전에 문자열을 출력하면 안 됩니다
//만약 입력된 문자열의 길이가 입력된 정수 미만이라면 wrong을 출력하세요.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    int n, length;
    char s1[11];

    scanf("%d %s", &n, s1);
    length = strlen(s1);

    if (length < n) printf("wrong");

    for (int i = 0; i < length - (n - 1); i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%c", s1[i + j]);
        }
        printf("\n");
    }

    return 0;

}