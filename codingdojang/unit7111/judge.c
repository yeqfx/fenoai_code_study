//문자열이 저장된 words.txt 파일이 주어집니다.
//파일을 읽은 뒤 내용을 거꾸로 저장하는 프로그램을 만드세요.
//결과는 fwrite 함수로 stdout에 저장하면 됩니다.
//단, words.txt의 최대 크기는 10, 000바이트입니다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE* fp = fopen("words.txt", "r");
    fseek(fp, 0, SEEK_END);
    int size = ftell(fp);
    char* buffer = malloc(size + 1);
    memset(buffer, 0, size + 1);
    fseek(fp, 0, SEEK_SET);
    fread(buffer, size, 1, fp);

    for (int i = size - 1; i >= 0; i--)
    {
        fwrite(&buffer[i], sizeof(char), 1, stdout);
    }

    fclose(fp);
    return 0;
}