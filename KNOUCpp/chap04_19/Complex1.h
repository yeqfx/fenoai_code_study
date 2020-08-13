#pragma once
class Complex1
{
private:
    double rPart, iPart;
public:
    Complex1(double r = 0, double i = 0);
    Complex1 conj() const;
    Complex1 add(const Complex1& c) const;
    Complex1 sub(const Complex1& c) const;
    Complex1 mul(const Complex1& c) const;
    Complex1 div(const Complex1& c) const;
    void display() const;
};

