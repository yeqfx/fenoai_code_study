#pragma once
#include <iostream>
#include <cstring>
#include <initializer_list>

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

    VecF(std::initializer_list<float> lst)
        : n{ static_cast<int>(lst.size()) }
    {
        arr = new float[n];
        std::copy(lst.begin(), lst.end(), arr);
    }

    VecF(const VecF& fv) : VecF(fv.n, fv.arr)
    {        
    }

    VecF(VecF&& fv) : n{ fv.n }, arr{ fv.arr }
    {
        fv.arr = nullptr;
        fv.n = 0;
    }

    VecF& operator = (const VecF& fv);  // 대입 연산자
    VecF& operator = (VecF&& fv);       // 이동 대입 연산자
    friend std::ostream& operator << (std::ostream& os, const VecF& fv);

    ~VecF()
    {
        delete[] arr;
    }

    VecF add(const VecF& fv) const;

    void print() const;
};