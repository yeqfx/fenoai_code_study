class CTest
{
public:
    CTest() : m_C1(1)  // ������ �ʱ�ȭ ����Ʈ
    {
    }

    const int m_C1;
    const int m_C2 = 2; // Ŭ���� ���� �ʱ�ȭ C++11���� ����
    // const int m_C3; const ��� ������ �ʱ�ȭ�� �ʿ��ϴ�.
};