#include <stdio.h>
#include <stdlib.h>

struct EncryptionHeader {
    char flags;
    int a;
    int b;
};

int main()
{
    struct EncryptionHeader header;

    printf("%d\n", sizeof(header));

    printf("%d\n", offsetof(struct EncryptionHeader, flags));
    printf("%d\n", offsetof(struct EncryptionHeader, a));
    printf("%d\n", offsetof(struct EncryptionHeader, b));
    return 0;
}