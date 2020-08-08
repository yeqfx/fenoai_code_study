class CTest
{
public:
    CTest() : m_C1(1)  // 생성자 초기화 리스트
    {
    }

    const int m_C1;
    const int m_C2 = 2; // 클래스 내부 초기화 C++11에서 도입
    // const int m_C3; const 멤버 변수는 초기화가 필요하다.
};