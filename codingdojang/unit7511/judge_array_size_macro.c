//���� �ҽ� �ڵ带 �ϼ��Ͽ� �迭�� ũ��(����� ����)�� ��µǰ� ���弼��.

#include <stdio.h>

struct Point2D {
    float x, y;
};

#define ARRSIZE(arr) sizeof(arr) / sizeof(arr[0])

int main()
{
    int numArr1[10];
    long long numArr2[5];
    struct Point2D p[3];

    printf("%d\n", ARRSIZE(numArr1));
    printf("%d\n", ARRSIZE(numArr2));
    printf("%d\n", ARRSIZE(p));

    return 0;

}