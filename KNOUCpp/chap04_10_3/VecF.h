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

    VecF(const VecF& fv) : VecF(fv.n, fv.arr)
    {        
    }

    VecF(VecF&& fv) : n{ fv.n }, arr{ fv.arr }
    {
        fv.arr = nullptr;
        fv.n = 0;
    }

    ~VecF()
    {
        delete[] arr;
    }

    VecF add(const VecF& fv) const;

    void print() const;
};