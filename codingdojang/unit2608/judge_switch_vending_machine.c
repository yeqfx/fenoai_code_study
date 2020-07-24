#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char menu;

    scanf("%c", &menu);

    switch (menu)
    {
    case 'f':
        printf("%s\n", "환타");
        break;

    case 'c':
        printf("%s\n", "콜라");
        break;

    case 'p':
        printf("%s\n", "포카리스웨트");
        break;

    default:
        printf("%s\n", "판매하지 않는 메뉴");
        break;
    }

    return 0;
}