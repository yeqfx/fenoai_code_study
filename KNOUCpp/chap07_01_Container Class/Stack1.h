#pragma once
typedef int STACK_ITEM;
class Stack
{
private:
    enum { MAXSTACK = 20 };
    int top;
    STACK_ITEM item[MAXSTACK];
public:
    Stack();
    bool empty();
    void initialize();
    void push(STACK_ITEM s);
    STACK_ITEM pop();
};