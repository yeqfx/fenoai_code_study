#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str0[40] = { 0, };
    char str1[40] = "C style string";
    char str2[] = "Object-Oriented ";
    const char* str3 = "Programming";

    cout << str1 << endl;

    cout << str0 << " str0 �� �迭 ũ��� " << sizeof(str0) << endl;
    cout << str1 << " str1�� �迭 ũ��� " << sizeof(str1) << endl;
    cout << str2 << " str2�� �迭 ũ��� " << sizeof(str2) << endl;
    cout << str3 << " str3�� �迭 ũ��� " << sizeof(str3) << endl;
    cout << endl;     
    cout << str0 << " str0�� �迭 ���̴� " << sizeof(str0) / sizeof(char) << endl;
    cout << str1 << " str1�� �迭 ���̴� " << sizeof(str1) / sizeof(char) << endl;
    cout << str2 << " str2�� �迭 ���̴� " << sizeof(str2) / sizeof(char) << endl;
    cout << str3 << " str3�� �迭 ���̴� " << sizeof(str3) / sizeof(char) << endl;
    cout << endl;     
    cout << str0 << " str0�� ���ڿ� ���̴� " << strlen(str0) << endl;
    cout << str1 << " str1�� ���ڿ� ���̴� " << strlen(str1) << endl;
    cout << str2 << " str2�� ���ڿ� ���̴� " << strlen(str2) << endl;
    cout << str3 << " str3�� ���ڿ� ���̴� " << strlen(str3) << endl;
    cout << endl;
    strcpy_s(str1, sizeof(str1) > sizeof(str2) ? sizeof(str1) : sizeof(str2), str2);
    cout << str1 << endl;
    cout << endl;
    strcat_s(str1, sizeof(str0), str3);
    cout << str1 << endl;

    return 0;
}