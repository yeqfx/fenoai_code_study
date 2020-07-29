#define _CRT_SECURE_NO_WARNINGS    // strcpy 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h>    // strcpy 함수가 선언된 헤더 파일

int main()
{
    char s1[10] = "Hello";    // 크기가 10인 char형 배열을 선언하고 문자열 할당
    char s2[10];              // 크기가 10인 char형 배열을 선언
    char* s2ptr;
    s2ptr = strcpy(s2, s1);        // s1의 문자열을 s2로 복사

    printf("%s\n", s2);    // Hello

    printf("원본문자열의 포인터 : %p\n", &s1);    // 원본문자열의 포인터
    printf("대상문자열의 포인터 : %p\n", &s2);    // 대상문자열의 포인터
    printf("strcpy 반환 포인터 : %p\n", &s2);    // strcpy 반환 포인터

    return 0;
}