#include <iostream>
#include <string>
using namespace std;

class CPerson
{
public:
    CPerson(string name, int id)
    {
        m_Name = name;
        m_ID = id;
    }

    CPerson(const CPerson& obj)
    {
        m_Name = obj.m_Name + " Copy";
        m_ID = -obj.m_ID;
    }

    string m_Name;
    int m_ID;
};

int main()
{
    CPerson p1("Bill", 1);
    CPerson p2 = p1;

    cout << p1.m_Name << " " << p1.m_ID << endl;
    cout << p2.m_Name << " " << p2.m_ID << endl;
}