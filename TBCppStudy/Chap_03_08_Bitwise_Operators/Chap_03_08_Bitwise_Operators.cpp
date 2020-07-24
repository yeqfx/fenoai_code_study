// Chap_03_08_Bitwise_Operators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bitset>

using namespace std;

int main()
{

    unsigned int a = 3;

    cout << bitset<8>((unsigned long)a << 1) << " " << (a << 1) << endl;
    cout << bitset<8>((unsigned long)a << 2) << " " << (a << 2) << endl;
    cout << bitset<8>((unsigned long)a << 3) << " " << (a << 3) << endl;
    cout << bitset<8>((unsigned long)a << 4) << " " << (a << 4) << endl;

    return 0;
}