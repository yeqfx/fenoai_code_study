#include <iostream>
#include "SafeIntArray.h"

int& SafeIntArray::operator[](int i)
{
    if (i < 0 || i >= limit)
    {
        std::cout << "첨자가 범위를 벗어나 프로그램을 종료합니다.";
        exit(EXIT_FAILURE);
    }
    return arr[i];
}

int SafeIntArray::operator[](int i) const
{
    if (i < 0 || i >= limit)
    {
        std::cout << "첨자가 범위를 벗어나 프로그램을 종료합니다.";
        exit(EXIT_FAILURE);
    }
    return arr[i];
}
