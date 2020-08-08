#include <iostream>


double Devide(int a, int b)
{
    return (double)a / b;
}

int main()
{
    int a, b;
    std::cout << "분자를 입력하세요." << std::endl;
    std::cin >> a;
    std::cout << "분모를 입력하세요." << std::endl;
    std::cin >> b;

    auto r = Devide(a, b);
    std::cout << r << std::endl;
    return 0;
}