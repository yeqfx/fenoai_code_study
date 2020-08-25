//문자열이 저장된 words.txt 파일이 주어집니다
//(반드시 GitHub 저장소의 Unit 71 / words.txt 파일로 테스트하세요).
//파일 처음부터 순방향으로 7바이트 지점에서 4바이트만큼 읽고, 
//파일 끝에서 역방향으로 6바이트 지점에서 2바이트만큼 읽은 값을 출력하는 프로그램을 만드세요.
//단, 읽은 문자열은 공백으로 띄우지 않고 붙여서 출력합니다.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fp = fopen("words.txt", "r");
    char buffer1[5] = { 0, }, buffer2[3] = { 0, };
    memset(buffer1, 0, 5);
    memset(buffer2, 0, 3);
    fseek(fp, 7, SEEK_SET);
    fread(buffer1, 4, 1, fp);
    fseek(fp, -6, SEEK_END);
    fread(buffer2, 2, 1, fp);
    printf("%s", buffer1);
    printf("%s\n", buffer2);
    fclose(fp);

    return 0;
}