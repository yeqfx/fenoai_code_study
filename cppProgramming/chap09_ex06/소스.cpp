#include <iostream>
using namespace std;

class CTest
{
public:
    int m_I = 1;
    const int m_CI = 2;
    static int s_I;
    static const int s_CI = 4;

    double m_D = 1.1;
    const double m_CD = 2.2;
    static double s_D;
    static const double s_CD;
};

int main()
{
    CTest ct;
    std::cout << ct.m_I << std::endl;
    std::cout << ct.m_CI << std::endl;
    //std::cout << ct.s_I << std::endl;
    std::cout << ct.s_CI << std::endl;
    std::cout << ct.m_D << std::endl;
    std::cout << ct.m_CD << std::endl;
    //std::cout << ct.s_D << std::endl;
    //std::cout << ct.s_CD << std::endl;

    return 0;
}

