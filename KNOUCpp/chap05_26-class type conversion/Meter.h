#pragma once
#include <iostream>
using namespace std;

class Meter
{
private:
    int m;
    int cm;
public:
    Meter() : m(0), cm(0) {}
    Meter(int meter, int cmeter) : m(meter), cm(cmeter) {}
    void display() const {
        if (m)
            std::cout << m << "m ";
        if (cm || !m)
            std::cout << cm << "cm";
        std::cout << std::endl;
    }
    int getM() const { return m; }
    int getCm() const { return cm; }
};
