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
    MyString();                     // 생성자
    MyString(const char* str);      // 생성자
    MyString(const MyString& mstr); // 복사 생성자
    MyString(MyString&& mstr);
    ~MyString();                    // 소멸자
    int length() const;             // 문자열 길이 반환 메소드
    // 대입 연산자
    const MyString& operator = (const MyString& mstr);
    // 이동 대입 연산자
    MyString& operator = (MyString&& mstr);
    // 문자열 연결 연산자
    MyString operator + (const MyString& mstr) const;
    MyString operator += (const MyString& mstr);
    bool operator == (const MyString& mstr) const;  // == 비교 연산자
    bool operator > (const MyString& mstr) const;   // > 비교 연산자
    bool operator < (const MyString& mstr) const;   // < 비교 연산자
    char& operator[](int i);                        // [] 첨자 연산자 대입
    const char& operator[] (int i) const;           // [] 첨자 연산자 읽기
    friend std::ostream& operator << (std::ostream& os, const MyString& mstr);
};

inline std::ostream& operator << (std::ostream& os, const MyString& mstr)
{
    os << mstr.buf;
    return os;
}

