//���ڿ��� ����� words.txt ������ �־����ϴ�.
//������ ���� �� ������ �Ųٷ� �����ϴ� ���α׷��� ���弼��.
//����� fwrite �Լ��� stdout�� �����ϸ� �˴ϴ�.
//��, words.txt�� �ִ� ũ��� 10, 000����Ʈ�Դϴ�.

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