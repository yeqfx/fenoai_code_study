#include <iostream>

int main()
{
    int year;

    std::cout << "출생 연도를 입력하세요" << std::endl;
    std::cin >> year;
    std::cout << "2002 한일 월드컵 당시 한국 나이는 " 
        << 2002 - year + 1 << "세 입니다." << std::endl;

    return 0;
}