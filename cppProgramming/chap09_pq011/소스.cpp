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
        //cout << "�̸�\t" << "����\t" << "����\t" << "����\t" << endl;
        cout << m_Name << "\t" << m_Height << "\t" << m_Weight << "\t" << m_Hp << endl;
    }
};

int main()
{
    cout << "�̸�\t\t" << "����\t" << "����\t" << "����\t" << endl;
    CRobot rb;
    rb.Set("�±Ǻ���", 18, 80, 3000);
    rb.print();
    rb.Set("��¡��\t", 17, 70, 2500);
    rb.print();
    rb.Set("��ĭ������", 20, 90, 3500);
    rb.print();
    rb.Set("�׷�������", 22, 100, 5000);
    rb.print();
}