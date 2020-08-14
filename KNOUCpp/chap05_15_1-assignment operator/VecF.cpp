#include <iostream>
#include "VecF.h"
using namespace std;

VecF& VecF::operator=(const VecF& fv)
{
    if (n != fv.n)
    {
        delete[] arr;
        arr = new float[n = fv.n];
    }
    memcpy(arr, fv.arr, sizeof(float) * n);
    return *this;
}

VecF& VecF::operator=(VecF&& fv)
{
    delete[] arr;
    n = fv.n;
    arr = fv.arr;
    fv.arr = nullptr;
    return *this;
}

VecF VecF::add(const VecF& fv) const
{
    VecF tmp(n);
    for (int i = 0; i < n; i++)
        tmp.arr[i] = arr[i] + fv.arr[i];
    return tmp;
}

void VecF::print() const
{
    cout << "[ ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "]";
}

std::ostream& operator<<(std::ostream& os, const VecF& fv)
{
    os << "[ ";
    for (int i = 0; i < fv.n; i++)
        os << fv.arr[i] << " ";
    os << " ]";
    return os;
}
