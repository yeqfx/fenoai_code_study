#include <iostream>

int main()
{
    char c{ 'C' };
    char k{ 'K' };

    std::cout << "'C'���� 'K'���� ���ĺ��� ���� : " << k - c + 1 << std::endl;

    for (int i = c, j = 1; i <= k; i++, j++)
        std::cout << j << "�� : " << i << " : " << (char)i << std::endl;

    return 0;
}