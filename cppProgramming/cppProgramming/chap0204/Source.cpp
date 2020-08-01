#include <iostream>

void CheckResult(char c)
{
    if (c >= 97 && c <= 122)
    {
        std::cout << "소문자 입니다." << std::endl;
    }
    else if (c >= 65 && c <= 90)
    {
        std::cout << "대문자 입니다." << std::endl;
    }
    else
    {
        std::cout << "알파벳이 아닙니다." << std::endl;
    }
}

int main()
{
    char c;
    std::cout << "알파벳 하나를 입력하세요." << std::endl;
    std::cin >> c;

    CheckResult(c);

    return 0;
}