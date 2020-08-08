class CTest
{
public:
    const CTest& CFunc1() const // 객체 자체를 반환
    {
        return *this;
    }

    const CTest* CFunc2() const
    {
        return this;
    }
};