#include <stdio.h>

int main() {
    int i;
    unsigned char a = 64;
    unsigned char p;

    p = 0x80;
    for (i = 0; i < 8; i++) {
        if (a & p) {
            printf("[1]");
        }
        else {
            printf("[0]");
        }
        p = p >> 1;
    }
    printf("\n");

    unsigned char flag1 = 1 << 7;
    unsigned char flag2 = 1 << 3;

    flag1 |= 1 << 2;
    flag1 &= ~(1 << 7);
    flag2 ^= 1 << 3;

    printf("%u %u\n", flag1, flag2);
}