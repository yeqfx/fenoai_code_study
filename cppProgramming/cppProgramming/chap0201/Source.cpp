#include <iostream>

int main()
{
    char c{ 'C' };
    char k{ 'K' };

    std::cout << "'C'부터 'K'까재 알파벳의 개수 : " << k - c + 1 << std::endl;

    for (int i = c, j = 1; i <= k; i++, j++)
        std::cout << j << "개 : " << i << " : " << (char)i << std::endl;

    return 0;
}