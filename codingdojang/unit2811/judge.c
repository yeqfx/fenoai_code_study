//표준 입력으로 금액이 입력됩니다. 
//1회당 요금은 1, 200원이고, 
//교통카드를 사용했을 때마다의 잔액을 각 줄에 출력하는 프로그램을 만드세요
//(scanf 함수 호출 전에 문자열을 출력하면 안 됩니다).
//단, 최초 금액은 출력하지 않아야 합니다.
//그리고 잔액은 음수가 될 수 없으며 잔액이 부족하면 출력을 끝냅니다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int price;

    scanf("%d", &price);
    
    price -= 1200;

    while (price >= 0)
    {
        printf("%d\n", price);
        price -= 1200;
    }

    return 0;
}