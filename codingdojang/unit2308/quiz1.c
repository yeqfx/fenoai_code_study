// 비트 켜기 : flag |= mask
// 비트 끄기 : flag &= ~mask
// 비트 토글 : flag ^= mask
// 비트 검사 : if (flag & mask)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    unsigned char num = 0b00111000;

    printf("%u\n", 2 << 11);
    printf("%u\n", 1 << 12);
    printf("%u\n", 1 << 13);
    printf("%u\n", 1 << 14);
    printf("%u\n", 2 << 14);

    printf("%b\n", num << 3);
    return 0;
}
