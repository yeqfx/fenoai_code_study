#include <iostream>
#include "StackT.h"
#include "MyString.h"
using namespace std;

int main()
{
    Stack<char> sc(100);
    sc.push('a');
    sc.push('b');
    cout << "CHAR STACK : ";
    while (!sc.empty())
        cout << sc.pop();
    cout << endl;

    Stack<MyString> msStack(10);
    MyString s1("KNOU");
    MyString s2("Dep.");
    MyString s3("CS");
    msStack.push(s1);
    msStack.push(s2 + s3);
    cout << "MyString STACK : ";
    while (!msStack.empty())
        cout << msStack.pop() << " ";
    cout << endl;
    return 0;
}