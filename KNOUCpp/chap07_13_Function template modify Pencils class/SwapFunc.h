#pragma once

template <typename ANY>
void swapFT(ANY& a, ANY& b)
{
    ANY temp = std::move(a);
    a = std::move(b);
    b = std::move(temp);
}