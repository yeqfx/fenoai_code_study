//���ڿ��� ����� words.txt ������ �־����ϴ�
//(�ݵ�� GitHub ������� Unit 71 / words.txt ���Ϸ� �׽�Ʈ�ϼ���).
//���� ó������ ���������� 7����Ʈ �������� 4����Ʈ��ŭ �а�, 
//���� ������ ���������� 6����Ʈ �������� 2����Ʈ��ŭ ���� ���� ����ϴ� ���α׷��� ���弼��.
//��, ���� ���ڿ��� �������� ����� �ʰ� �ٿ��� ����մϴ�.
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