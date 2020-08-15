#pragma once
#include <ostream>
class MyString
{
private:
    int len;
    int bufSize;
    char* buf;
    MyString(int s);
public:
    MyString();                     // ������
    MyString(const char* str);      // ������
    MyString(const MyString& mstr); // ���� ������
    MyString(MyString&& mstr);
    ~MyString();                    // �Ҹ���
    int length() const;             // ���ڿ� ���� ��ȯ �޼ҵ�
    // ���� ������
    const MyString& operator = (const MyString& mstr);
    // �̵� ���� ������
    MyString& operator = (MyString&& mstr);
    // ���ڿ� ���� ������
    MyString operator + (const MyString& mstr) const;
    MyString operator += (const MyString& mstr);
    bool operator == (const MyString& mstr) const;  // == �� ������
    bool operator > (const MyString& mstr) const;   // > �� ������
    bool operator < (const MyString& mstr) const;   // < �� ������
    char& operator[](int i);                        // [] ÷�� ������ ����
    const char& operator[] (int i) const;           // [] ÷�� ������ �б�
    friend std::ostream& operator << (std::ostream& os, const MyString& mstr);
};

inline std::ostream& operator << (std::ostream& os, const MyString& mstr)
{
    os << mstr.buf;
    return os;
}

