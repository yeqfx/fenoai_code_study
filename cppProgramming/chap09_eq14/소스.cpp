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

    // SFunc(); ���� ��� �Լ��� �ν��Ͻ� �����̳� Ŭ���� ���� �����ڷ� ȣ���ؾ�
}
