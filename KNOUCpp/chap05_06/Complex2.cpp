#include <iostream>
#include "Complex2.h"
using namespace std;

Complex2::Complex2(double r, double i) : rPart(r), iPart(i)
{
}

Complex2 Complex2::conj() const
{
    return Complex2(rPart, -iPart);
}

Complex2 Complex2::add(const Complex2& c) const
{
    return Complex2(rPart + c.rPart, iPart + c.iPart);
}

Complex2 Complex2::sub(const Complex2& c) const
{
    return Complex2(rPart - c.rPart, iPart - c.iPart);
}

Complex2 Complex2::mul(const Complex2& c) const
{
    double r = rPart * c.rPart - iPart * c.iPart;
    double i = rPart * c.iPart + iPart * c.rPart;
    return Complex2(r, i);
}

Complex2 Complex2::div(const Complex2& c) const
{
    double d = c.rPart * c.rPart + c.iPart * c.iPart;
    Complex2 c1 = mul(c.conj());
    return Complex2(c1.rPart / d, c1.iPart / d);
}

Complex2 Complex2::operator+(const Complex2& c) const
{
    Complex2 tmp(*this);
    tmp.rPart += c.rPart;
    tmp.iPart += c.iPart;
    return tmp;
}

Complex2 Complex2::operator+(double r) const
{
    return Complex2(rPart + r, iPart);
}

Complex2& Complex2::operator+=(const Complex2&& c)
{
    rPart += c.rPart;
    iPart += c.iPart;
    return *this;
}

Complex2 operator + (double r, const Complex2& c)
{
    return Complex2(r + c.rPart, c.iPart);
}

std::ostream& operator<<(std::ostream& os, const Complex2& c)
{
    os << "(" << c.rPart;
    if (c.iPart > 0)
        os << "+j" << c.iPart;
    else if (c.iPart < 0)
        os << "-j" << -c.iPart;
    os << ")";
    return os;
}

void Complex2::display() const
{
    cout << "(" << rPart;
    if (iPart > 0)
        cout << "+j" << iPart;
    else if (iPart < 0)
        cout << "-j" << -iPart;
    cout << ")";
}

