#include <stdio.h>
#include <math.h>    // sqrt �Լ��� ����� ��� ����

struct Point2D {
    int x;
    int y;
};

int main()
{
    struct Point2D p1;    // ��1
    struct Point2D p2;    // ��2

    // ��1 ��ġ
    p1.x = 30;
    p1.y = 20;

    // ��2 ��ġ
    p2.x = 60;
    p2.y = 50;

    int a = p2.x - p1.x;    // �� a�� ����
    int b = p2.y - p1.y;    // �� b�� ����

    double c = sqrt((a * a) + (b * b));    // (a * a) + (b * b)�� �������� ����

    printf("%f\n", c);       // 42.426407

    return 0;
}