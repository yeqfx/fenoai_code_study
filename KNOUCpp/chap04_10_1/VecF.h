#pragma once
#include <iostream>
#include <cstring>

class VecF
{
    int n;
    float* arr;
public:
    VecF(int d, const float* a = nullptr) : n{ d }
    {
        arr = new float[d];
        if (a) memcpy(arr, a, sizeof(float) * n);
    }

    VecF(const VecF& fv) : n{ fv.n }
    {
        arr = new float[n];
        memcpy(arr, fv.arr, sizeof(float) * n);
    }

    ~VecF()
    {
        delete[] arr;
    }

    VecF add(const VecF& fv) const;

    void print() const;
};