//표준 입력으로 공백이 포함된 길이 30 이하의 영문 문자열이 입력됩니다
//(공백이 여러 개 연속될 수도 있습니다).
//입력된 문자열이 회문이면 1, 회문이 아니면 0을 출력하는 프로그램을 만드세요
//(scanf 함수 호출 전에 문자열을 출력하면 안 됩니다).
//
//scanf에서 공백을 포함한 문자열을 입력받으려면
//서식 지정자로 "%[^\n]s"를 사용하면 됩니다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() 
{
    char s1[31];
    char s2[31];
    char* sArr[30] = { NULL, };
    int i = 0;
    bool isPalindrome = true;

    scanf("%[^\n]s", s1);
    char *ptr = strtok(s1, " ");

    while (ptr != NULL)
    {
        strcat(s2, ptr);
        i++;

        ptr = strtok(NULL, " ");
    }
    int length  = strlen(s2);

    for (int i = 0; i < length / 2; i++)
    {
        if (s2[i] != s2[length - 1 - i])
        {
            isPalindrome = false;
            break;
        }
    }
    printf("%d\n", isPalindrome);

    return 0;
}