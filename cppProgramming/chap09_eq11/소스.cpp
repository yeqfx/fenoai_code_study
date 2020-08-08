#include <iostream>

class CTest
{
public:
    int m_Value;

    void Show()
    {
        std::cout << m_Value << std::endl;//this가 nullptr여서 런타인 예외 발생함
    }
};

int main()
{
    CTest* pT = nullptr;
    pT->Show(); 
}