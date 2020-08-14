#include "Circle.h"
#include "Figure.h"
#include "GrAttrib.h"
#include "Triangle.h"
using namespace std;

GrAttrib curAttrib("°ËÁ¤", "Èò»ö");

void drawFigs(const Figure* const figs[], int n)
{
    for (int i = 0; i < n; i++)
    {
        figs[i]->draw();
        cout << endl;
    }
}

int main()
{
    Figure* figs[2];

    figs[0] = new Circle(0, 20, 10);

    double v[3][2] = { {0, 0}, {20, 0}, {10, 15} };
    curAttrib.setLineColor("»¡°­");
    curAttrib.setFillColor("³ë¶û");
    figs[1] = new Triangle(v);
    drawFigs(figs, 2);

    figs[0]->scale(20);
    figs[1]->move(5, 10);
    drawFigs(figs, 2);

    return 0;
}