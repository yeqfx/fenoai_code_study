//다음 소스 코드를 완성하여 3이 출력되게 만드세요.
//구조체 멤버의 이름은 마음대로 지어도 됩니다.

#include <stdio.h>

struct Packet {
    char a;
    char b;
    char c;
};

#pragma pack(push, 1)
typedef struct {
    char a;
    short b;
} packet;
#pragma pack(pop)


int main()
{
    struct Packet pkt;

    printf("%d\n", sizeof(pkt));

    packet pkt2;

    printf("%d\n", sizeof(pkt2));
    return 0;
}