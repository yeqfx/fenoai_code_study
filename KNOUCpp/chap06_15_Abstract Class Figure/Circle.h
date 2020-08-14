#pragma once
#include <iostream>
#include "Figure.h"

class Circle : public Figure
{
private:
    double cx, cy;
    double radius;
public:
    Circle(double x, double y, double r) : cx(x), cy(y), radius(r) {}

    void move(double dx, double dy);
    void scale(double s);
    void draw() const;
};