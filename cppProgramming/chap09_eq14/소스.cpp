class CTest
{
public:
    static void SFunc()
    {
    }
};

int main()
{
    CTest t;
    t.SFunc();

    CTest* pT = &t;
    pT        ->SFunc();
    CTest::SFunc();

    // SFunc(); 정적 멤버 함수는 인스턴스 기준이나 클래스 범위 연산자로 호출해야
}
