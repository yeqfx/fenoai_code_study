#include <iostream>

class CTest
{
public:
    int m_Value;

    void Show()
    {
        std::cout << m_Value << std::endl;//this�� nullptr���� ��Ÿ�� ���� �߻���
    }
};

int main()
{
    CTest* pT = nullptr;
    pT->Show(); 
}