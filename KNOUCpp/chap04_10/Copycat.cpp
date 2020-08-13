#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Copycat.h"

using namespace std;

Copycat::Copycat(const char* n)
{
    name = new char[strlen(n) + 1];
    strcpy(name, n);
}

Copycat::Copycat(const Copycat& cc)
{
    name = new char[strlen(cc.name) + 1];
    strcpy(name, cc.name);
}

Copycat::~Copycat()
{
    delete[] name;
}

void Copycat::whoRU() const
{
    cout << "나는 " << name << "입니다." << endl;
}
