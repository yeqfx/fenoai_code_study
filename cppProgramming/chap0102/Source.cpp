#include <iostream>

int main()
{
    std::cout << __FILE__ << std::endl;
    std::cout << __LINE__ << std::endl;
    std::cout << __FUNCTION__ << std::endl;

#ifdef _M_X64
    std::cout << "�� ���α׷��� x64 ���α׷��Դϴ�." << std::endl;
#else
    std::cout << "�� ���α׷��� x86 ���α׷��Դϴ�." << std::endl;
#endif
    return 0;
}