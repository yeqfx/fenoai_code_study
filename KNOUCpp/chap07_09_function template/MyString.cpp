#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "MyString.h"

MyString::MyString(int s) : len(s), bufSize(s)
{
    buf = new char[s + 1];
    buf[s] = '\0';
}

MyString::MyString() : len(0), bufSize(0)
{
    buf = new char[len + 1];
    buf[0] = '\0';
}

MyString::MyString(const char* str)
{
    len = bufSize = strlen(str);
    buf = new char[len + 1];
    strcpy(buf, str);
}

MyString::MyString(const MyString& mstr)
    : len(mstr.len), bufSize(mstr.len)
{
    buf = new char[len + 1];
    strcpy(buf, mstr.buf);
}

MyString::MyString(MyString&& mstr)
    : len(mstr.len), bufSize(mstr.bufSize), buf(mstr.buf)
{
    mstr.buf = nullptr;
}

MyString::~MyString()
{
    delete[] buf;
}

int MyString::length() const
{
    return len;
}

const MyString& MyString::operator=(const MyString& mstr)
{
    if (bufSize < mstr.len)
    {
        delete[] buf;
        len = bufSize = mstr.len;
        buf = new char[len + 1];
    }
    else
        len = mstr.len;
    strcpy(buf, mstr.buf);
    return *this;
}

MyString& MyString::operator=(MyString&& mstr)
{
    delete[] buf;
    len = mstr.len;
    bufSize = mstr.bufSize;
    buf = mstr.buf;
    mstr.buf = nullptr;
    return *this;
}

MyString MyString::operator+(const MyString& mstr) const
{
    MyString tmstr(len + mstr.len); // private로 정의한 생성자
    strcpy(tmstr.buf, buf);
    strcpy(tmstr.buf + len, mstr.buf);
    return tmstr;
}

MyString MyString::operator+=(const MyString& mstr)
{
    if (bufSize < len + mstr.len)
    {
        char* tbuf = new char[(bufSize = len + mstr.len) + 1];
        strcpy(tbuf, buf);
        delete[] buf;
        buf = tbuf;
    }
    strcpy(buf + len, mstr.buf);
    len += mstr.len;
    return *this;
}

bool MyString::operator==(const MyString& mstr) const
{
    return !strcmp(buf, mstr.buf);
}

bool MyString::operator>(const MyString& mstr) const
{
    return strcmp(buf, mstr.buf) > 0;
}

bool MyString::operator<(const MyString& mstr) const
{
    return strcmp(buf, mstr.buf) < 0;
}

char& MyString::operator[](int i)
{
    return buf[i];
}

const char& MyString::operator[](int i) const
{
    return buf[i];
}
