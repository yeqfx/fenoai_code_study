#include <iostream>
using namespace std;

class CTime
{
private:
    int m_Elapsed;

public:
    void SetElapsed(int Elapsed)
    {
        m_Elapsed = Elapsed;
    }

    void PrintTime()
    {
        int h, m, s;
        m = m_Elapsed / 60;
        h = m / 60;
        s = m_Elapsed % 60;
        m = m % 60;

        cout << h << "�ð� " << m << "�� " << s << "��" << endl;
    }
};

int main()
{
    cout << "�������� ������ �ʸ� �Է��ϼ���" << endl;

    int Elapsed;
    cin >> Elapsed;

    CTime t;
    t.SetElapsed(Elapsed);
    t.PrintTime();

    return 0;
}