#include <iostream>

int main()
{
    std::cout << __FILE__ << std::endl;
    std::cout << __LINE__ << std::endl;
    std::cout << __FUNCTION__ << std::endl;

#ifdef _M_X64
    std::cout << "이 프로그램은 x64 프로그램입니다." << std::endl;
#else
    std::cout << "이 프로그램은 x86 프로그램입니다." << std::endl;
#endif
    return 0;
}