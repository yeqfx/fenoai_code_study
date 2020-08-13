#include <iostream>
#include "Pencils.h"
using namespace std;

Pencils& Pencils::operator++()
{
    if (++np >= 12)
        ++dozens, np = 0;
    return *this;
}

Pencils Pencils::operator++(int)
{
    Pencils tmp(*this);
    if (++np >= 12)
        ++dozens, np = 0;
    return tmp;
}

void Pencils::display() const
{
    if (dozens)
    {
        cout << dozens << "Ÿ ";
        if (np) cout << np << "�ڷ�";
        cout << endl;
    }
    else
        cout << np << "�ڷ�" << endl;
}
