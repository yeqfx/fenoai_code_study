#pragma once
#include <iostream>

class Complex2
{
private:
    double rPart, iPart;
public:
    Complex2(double r = 0, double i = 0);
    Complex2 conj() const;
    Complex2 add(const Complex2& c) const;
    Complex2 sub(const Complex2& c) const;
    Complex2 mul(const Complex2& c) const;
    Complex2 div(const Complex2& c) const;
    Complex2 operator + (const Complex2& c) const;
    Complex2 operator + (double r) const;
    Complex2& operator += (const Complex2&& c);
    void display() const;
    friend Complex2 operator + (double r, const Complex2& c);
    friend std::ostream& operator << (std::ostream& os, const Complex2& c);
};

