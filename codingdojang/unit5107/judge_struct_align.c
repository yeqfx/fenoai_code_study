//���� �ҽ� �ڵ带 �ϼ��Ͽ� 3�� ��µǰ� ���弼��.
//����ü ����� �̸��� ������� ��� �˴ϴ�.

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