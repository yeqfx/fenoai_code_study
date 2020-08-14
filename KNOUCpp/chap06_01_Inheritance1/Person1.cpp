#include <iostream>
#include "Person1.h"
using namespace std;

void Person::setName(std::string n)
{
    name = n;
}
const std::string Person::getName() const
{
    return name;
}
void Person::print() const
{
    cout << name;
}
