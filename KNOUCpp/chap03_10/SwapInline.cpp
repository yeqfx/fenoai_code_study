#include "SwapInline.h"

void SwapValues(int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp;
}