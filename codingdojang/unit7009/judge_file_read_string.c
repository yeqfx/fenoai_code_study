//최대 길이 100자 미만의 문자열이 저장된 words.txt 파일이 주어집니다.
//다음 소스 코드를 완성하여 words.txt에서 문자열을 읽도록 만드세요.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char* buffer = malloc(100);
    memset(buffer, 0, 100);

    FILE* fp = fopen("words.txt", "r");

    fread(buffer, 100, 1, fp);

    printf("%s\n", buffer);

    fclose(fp);

    free(buffer);

    return 0;
}