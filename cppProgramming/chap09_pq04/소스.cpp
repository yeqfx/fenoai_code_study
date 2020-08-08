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

        cout << h << "시간 " << m << "분 " << s << "초" << endl;
    }
};

int main()
{
    cout << "자정부터 지나간 초를 입력하세요" << endl;

    int Elapsed;
    cin >> Elapsed;

    CTime t;
    t.SetElapsed(Elapsed);
    t.PrintTime();

    return 0;
}