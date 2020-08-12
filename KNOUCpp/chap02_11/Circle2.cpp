#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.141593;

struct C2dType
{
    double x, y;
};

class CircleClass
{
private:
    C2dType center;
    double radius;

public:
    void init(double cx, double cy, double r)
    {
        center.x = cx;
        center.y = cy;
        radius = r;
    }

    double area() const
    {
        return radius * radius * PI;
    }

    bool chkOverlap(const CircleClass& c) const
    {
        double dx = center.x - c.center.x;
        double dy = center.y - c.center.y;
        double dCntr = sqrt(dx * dx + dy * dy);
        return dCntr < radius + c.radius;
    }

    void display() const
    {
        cout << "  �߽� : (" << center.x << "," << center.y << ")";
        cout << "  �ݰ� : " << radius << endl;
    }
};

int main()
{
    CircleClass c1, c2;
    c1.init(0, 0, 10);
    c2.init(30, 10, 5);

    cout << "��1" << endl;
    c1.display();
    cout << "  ��1�� ���� : " << c1.area() << endl;
    cout << "��2" << endl;
    c2.display();
    cout << "  ��2�� ���� : " << c2.area() << endl << endl;

    if (c1.chkOverlap(c2))
        cout << "�� ���� ��ø�˴ϴ�." << endl;
    else
        cout << "�� ���� ��ø���� �ʽ��ϴ�." << endl;

    return 0;
}