#pragma once
class CharStack
{
private:
    enum { size = 20 };
    int top;
    char buf[size];
public:
    CharStack();
    bool chkEmpty() const;
    bool chkFull() const;
    bool push(char ch);
    char pop();
};

