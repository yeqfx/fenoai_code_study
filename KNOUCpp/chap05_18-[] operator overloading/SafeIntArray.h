#pragma once
class SafeIntArray
{
private:
    int limit;
    int* arr;
public:
    SafeIntArray(int n) : limit(n)
    {
        arr = new int[n];
    }
    ~SafeIntArray()
    {
        delete[] arr;
    }
    int size() const
    {
        return limit;
    }
    int& operator[](int i);
    int operator[](int i) const;
};

