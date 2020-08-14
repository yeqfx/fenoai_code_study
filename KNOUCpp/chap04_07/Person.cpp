#include "..\chap06_01_Inheritance1\Person1.h"
#include "..\chap06_01_Inheritance1\Person1.h"
#include "..\chap06_01_Inheritance1\Person1.h"
#include "..\chap06_01_Inheritance1\Person1.h"
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Person.h"
using namespace std;

Person::Person(const char* name, const char* addr)
{
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
    this->addr = new char[strlen(addr) + 1];
    strcpy(this->addr, addr);
    cout << "Person ��ü ������(" << name << ")" << endl;
}

Person::~Person()
{
    cout << "Person ��ü ������(" << name << ")" << endl;
    delete[] name;
    delete[] addr;
}

void Person::print() const
{
    cout << addr << "�� ��� " << name << "�Դϴ�." << endl;
}

void Person::chAddr(const char* newAddr)
{
    delete[] addr;
    addr = new char[strlen(newAddr) + 1];
    strcpy(addr, newAddr);
}
