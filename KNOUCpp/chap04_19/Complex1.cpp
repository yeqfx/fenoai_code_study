#include <iostream>
#include "Complex1.h"
using namespace std;

Complex1::Complex1(double r, double i) : rPart(r), iPart(i)
{
}

Complex1 Complex1::conj() const
{
    return Complex1(rPart, -iPart);
}

Complex1 Complex1::add(const Complex1& c) const
{
    return Complex1(rPart + c.rPart, iPart + c.iPart);
}

Complex1 Complex1::sub(const Complex1& c) const
{
    return Complex1(rPart - c.rPart, iPart - c.iPart);
}

Complex1 Complex1::mul(const Complex1& c) const
{
    double r = rPart * c.rPart - iPart * c.iPart;
    double i = rPart * c.iPart + iPart * c.rPart;
    return Complex1(r, i);
}

Complex1 Complex1::div(const Complex1& c) const
{
    double d = c.rPart * c.rPart + c.iPart * c.iPart;
    Complex1 c1 = mul(c.conj());
    return Complex1(c1.rPart / d, c1.iPart / d);
}

void Complex1::display() const
{
    cout << "(" << rPart;
    if (iPart > 0)
        cout << "+j" << iPart;
    else if (iPart < 0)
        cout << "-j" << -iPart;
    cout << ")";
}

