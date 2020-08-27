#include <stdio.h>
#include <string.h>

#pragma pack(push, 1)
struct Data1 {
    short num1;
    short num2;
    short num3;
    short num4;
};

struct Data2 {
    char c1;
    short num1;
    int num2;
    char s1[20];
};
#pragma pack(pop)

int main()
{
    struct Data1 d1;
    struct Data2 d2;
    memset(&d2, 0, sizeof(d2));
    
    
    d1.num1 = 100;
    d1.num2 = 200;
    d1.num3 = 300;
    d1.num4 = 400;

    d2.c1 = 'a';
    d2.num1 = 32100;
    d2.num2 = 2100000100;
    strcpy_s(d2.s1, sizeof(d2.s1), "Hello, world!");

    FILE* fp1= 0;
    FILE* fp2 = 0;
    fopen_s(&fp1, "data.bin", "wb");
    fopen_s(&fp2, "data2.bin", "wb");

    fwrite(&d1, sizeof(d1), 1, fp1);
    fwrite(&d2, sizeof(d2), 1, fp2);

    fclose(fp1);
    fclose(fp2);

    return 0;
}