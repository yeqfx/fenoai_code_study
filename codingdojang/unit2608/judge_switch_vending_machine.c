#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char menu;

    scanf("%c", &menu);

    switch (menu)
    {
    case 'f':
        printf("%s\n", "ȯŸ");
        break;

    case 'c':
        printf("%s\n", "�ݶ�");
        break;

    case 'p':
        printf("%s\n", "��ī������Ʈ");
        break;

    default:
        printf("%s\n", "�Ǹ����� �ʴ� �޴�");
        break;
    }

    return 0;
}