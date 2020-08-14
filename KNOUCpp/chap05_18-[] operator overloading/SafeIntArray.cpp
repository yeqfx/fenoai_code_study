#include <iostream>
#include "SafeIntArray.h"

int& SafeIntArray::operator[](int i)
{
    if (i < 0 || i >= limit)
    {
        std::cout << "÷�ڰ� ������ ��� ���α׷��� �����մϴ�.";
        exit(EXIT_FAILURE);
    }
    return arr[i];
}

int SafeIntArray::operator[](int i) const
{
    if (i < 0 || i >= limit)
    {
        std::cout << "÷�ڰ� ������ ��� ���α׷��� �����մϴ�.";
        exit(EXIT_FAILURE);
    }
    return arr[i];
}
