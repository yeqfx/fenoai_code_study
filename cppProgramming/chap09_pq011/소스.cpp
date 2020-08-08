#include <iostream>
#include <cstring>
using namespace std;


class CRobot
{
private:
    string m_Name;
    int m_Height;
    int m_Weight;
    int m_Hp;

public:
    void Set(string name, int height, int weight, int hp)
    {
        m_Name = name;
        m_Height = height;
        m_Weight = weight;
        m_Hp = hp;
    }

    void print()
    {
        //cout << "이름\t" << "신장\t" << "무게\t" << "마력\t" << endl;
        cout << m_Name << "\t" << m_Height << "\t" << m_Weight << "\t" << m_Hp << endl;
    }
};

int main()
{
    cout << "이름\t\t" << "신장\t" << "무게\t" << "마력\t" << endl;
    CRobot rb;
    rb.Set("태권브이", 18, 80, 3000);
    rb.print();
    rb.Set("마징가\t", 17, 70, 2500);
    rb.print();
    rb.Set("메칸더브이", 20, 90, 3500);
    rb.print();
    rb.Set("그랜다이저", 22, 100, 5000);
    rb.print();
}