#include <iostream>

void CheckResult(char c)
{
    if (c >= 97 && c <= 122)
    {
        std::cout << "�ҹ��� �Դϴ�." << std::endl;
    }
    else if (c >= 65 && c <= 90)
    {
        std::cout << "�빮�� �Դϴ�." << std::endl;
    }
    else
    {
        std::cout << "���ĺ��� �ƴմϴ�." << std::endl;
    }
}

int main()
{
    char c;
    std::cout << "���ĺ� �ϳ��� �Է��ϼ���." << std::endl;
    std::cin >> c;

    CheckResult(c);

    return 0;
}