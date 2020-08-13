#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "NameObj.h"

using namespace std;

NamedObj::NamedObj(const char* s)
{
    name = new char[strlen(s) + 1];
    strcpy(name, s);
    id = ++nConstr;
}

NamedObj::~NamedObj()
{
    ++nDestr;
    delete[] name;
}

void NamedObj::display() const
{
    cout << "ID : " << id << " ---> ¿Ã∏ß : " << name << endl;
}

int NamedObj::nObj()
{
    return nConstr - nDestr;
}

int NamedObj::nConstr = 0;
int NamedObj::nDestr = 0;