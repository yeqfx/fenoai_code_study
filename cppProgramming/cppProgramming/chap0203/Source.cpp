#include <iostream>


double Devide(int a, int b)
{
    return (double)a / b;
}

int main()
{
    int a, b;
    std::cout << "���ڸ� �Է��ϼ���." << std::endl;
    std::cin >> a;
    std::cout << "�и� �Է��ϼ���." << std::endl;
    std::cin >> b;

    auto r = Devide(a, b);
    std::cout << r << std::endl;
    return 0;
}