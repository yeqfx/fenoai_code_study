//ǥ�� �Է����� unsigned char�� ���� �� ���� �Էµ˴ϴ�.
//ù ��° ������ ����(R), �� ��° ������ �ʷ�(G), �� ��° ������ �Ķ�(B)�Դϴ�.
//���� �ҽ� �ڵ带 �ϼ��Ͽ� 16���� RGB ���� ��µǰ� ���弼��.
//
//16������ ����� ���� �� �ڸ��� B, G, R ������ ����ϸ� �˴ϴ�.


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define RGB(r, g, b) ((b) << 16 | (g) << 8 | (r))

int main()
{
    int r, g, b;
    scanf("%d %d %d", &r, &g, &b);

    //printf("#%06X\n", 197121);
    printf("#%06X\n", RGB(r, g, b));
    printf("#%06X\n", RGB(1 & 1, 2 & 2, 3 & 3));

    return 0;

}