#pragma once
#include <iostream>
#include "Meter.h"

class Feet
{
private:
    int ft;
    int in;
public:
    Feet() :ft(0), in(0) {}
    Feet(int f, int i) : ft(f), in(i) {}
    Feet(const Meter& m)
    {
        int cmeter = m.getM() * 100 + m.getCm();
        in = static_cast<int>(cmeter / 2.54 + 0.5);
        ft = in / 12;
        in %= 12;
    }
    void display() const
    {
        if (ft)
            std::cout << ft << "ft ";
        if (in || !ft)
            std::cout << in << "in";
        std::cout << endl;
    }
};
