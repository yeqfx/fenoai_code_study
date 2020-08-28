//표준 입력으로 unsigned char형 정수 세 개가 입력됩니다.
//첫 번째 정수는 빨강(R), 두 번째 정수는 초록(G), 세 번째 정수는 파랑(B)입니다.
//다음 소스 코드를 완성하여 16진수 RGB 값이 출력되게 만드세요.
//
//16진수로 출력할 때는 두 자리씩 B, G, R 순으로 출력하면 됩니다.


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