#pragma once
#include <iostream>
#include "Figure.h"

class Triangle : public Figure
{
    double x1, y1, x2, y2, x3, y3;
public:
    Triangle(const double v[3][2]);

    void move(double dx, double dy);
    void scale(double s);
    void draw() const;
};