class CTest
{
public:
    const CTest& CFunc1() const // ��ü ��ü�� ��ȯ
    {
        return *this;
    }

    const CTest* CFunc2() const
    {
        return this;
    }
};