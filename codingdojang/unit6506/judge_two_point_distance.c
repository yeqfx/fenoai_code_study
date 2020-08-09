//ǥ�� �Է����� x, y ��ǥ �� ���� �Էµ˴ϴ�.
//���� �ҽ� �ڵ带 �ϼ��Ͽ� �� �� ������ �Ÿ��� ��µǰ� ���弼��.
//�̶� �� �� ������ �Ÿ��� double�� �Ǽ��� ��µǾ�� �մϴ�..

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

struct Point2D {
    int x;
    int y;
};

double getDistance(struct Point2D p1, struct Point2D p2)
{
    return sqrt(pow((double)p1.x - p2.x, 2) + pow((double)p1.y - p2.y, 2));
}

int main()
{
    struct Point2D p1;
    struct Point2D p2;

    scanf("%d %d %d %d", &p1.x, &p1.y, &p2.x, &p2.y);

    printf("%f\n", getDistance(p1, p2));

    return 0;
}