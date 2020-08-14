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

    cout << str0 << " str0 의 배열 크기는 " << sizeof(str0) << endl;
    cout << str1 << " str1의 배열 크기는 " << sizeof(str1) << endl;
    cout << str2 << " str2의 배열 크기는 " << sizeof(str2) << endl;
    cout << str3 << " str3의 배열 크기는 " << sizeof(str3) << endl;
    cout << endl;     
    cout << str0 << " str0의 배열 길이는 " << sizeof(str0) / sizeof(char) << endl;
    cout << str1 << " str1의 배열 길이는 " << sizeof(str1) / sizeof(char) << endl;
    cout << str2 << " str2의 배열 길이는 " << sizeof(str2) / sizeof(char) << endl;
    cout << str3 << " str3의 배열 길이는 " << sizeof(str3) / sizeof(char) << endl;
    cout << endl;     
    cout << str0 << " str0의 문자열 길이는 " << strlen(str0) << endl;
    cout << str1 << " str1의 문자열 길이는 " << strlen(str1) << endl;
    cout << str2 << " str2의 문자열 길이는 " << strlen(str2) << endl;
    cout << str3 << " str3의 문자열 길이는 " << strlen(str3) << endl;
    cout << endl;
    strcpy_s(str1, sizeof(str1) > sizeof(str2) ? sizeof(str1) : sizeof(str2), str2);
    cout << str1 << endl;
    cout << endl;
    strcat_s(str1, sizeof(str0), str3);
    cout << str1 << endl;

    return 0;
}