#include <iostream>
#include "VecF.h"
using namespace std;

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
