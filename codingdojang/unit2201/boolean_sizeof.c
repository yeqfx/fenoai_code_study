#include <stdio.h>
#include <stdbool.h>

int main()
{
    printf("int�� ũ��: %d\n", sizeof(int));
    printf("bool�� ũ��: %d\n", sizeof(bool));

    bool b1 = false;
    bool b2 = true;

    if (b1 != true)
        printf("��\n");
    else
        printf("����\n");

    printf("%s\n", b2 == false ? "��" : "����");

    return 0;
}