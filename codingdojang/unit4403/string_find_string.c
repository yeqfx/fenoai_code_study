#include <stdio.h>
#include <string.h>    // strstr 함수가 선언된 헤더 파일

int main()
{
    //char s1[30] = "A Garden Diary";     // 크기가 30인 char형 배열을 선언하고 문자열 할당

    //char* ptr = strstr(s1, "den");      // den으로 시작하는 문자열 검색, 포인터 반환

    //printf("%s\n", ptr);    // den Diary
    char s1[100] = "A Garden Diary A Garden Diary A Garden Diary";

    printf("%p\n", s1);

    char* ptr = strstr(s1, "den");     // den으로 시작하는 문자열 검색, 포인터 반환
    printf("%p\n", ptr);

    while (ptr != NULL)                // 검색된 문자열이 없을 때까지 반복
    {
        printf("%s\n", ptr);           // 검색된 문자열 출력
        printf("%p\n", ptr);
        ptr = strstr(ptr + 1, "den");  // den 포인터에 1을 더하여 e부터 검색
        printf("%p\n", ptr);
    }
    return 0;
}