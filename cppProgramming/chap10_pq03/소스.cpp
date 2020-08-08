#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class CParent
{
public:
    CParent()
    {
    }

    CParent(const char* name)
    {
        strcat(m_Name, name);
    }

    char m_Name[16] = { 0 };
};

class CPerson : public CParent
{
public:
    CPerson(const char* ParentName, const char* Name)
    {
        strcat(CParent::m_Name, ParentName);
        strcat(m_Name, Name);
    }

    CPerson(const CPerson& obj) : CParent("À¯ÀüÀÚ°øÇÐ")
    {
        strcat(m_Name, obj.m_Name);
        strcat(m_Name, " Copy");
    }

    char m_Name[16] = { 0 };
};

int main()
{
    CPerson p1("±¤°³Åä´ë¿Õ", "Àå¼ö¿Õ");
    CPerson p2 = p1;

    cout << p1.CParent::m_Name << " - " << p1.m_Name << endl;
    cout << p2.CParent::m_Name << " - " << p2.m_Name << endl;

}