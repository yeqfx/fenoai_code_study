#include <iostream>

int main()
{
    int year;

    std::cout << "��� ������ �Է��ϼ���" << std::endl;
    std::cin >> year;
    std::cout << "2002 ���� ������ ��� �ѱ� ���̴� " 
        << 2002 - year + 1 << "�� �Դϴ�." << std::endl;

    return 0;
}