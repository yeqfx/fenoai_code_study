#include <iostream>
#include "Student1.h"
using namespace std;

void Student::setSchool(std::string s)
{
    school = s;
}

std::string Student::getSchool() const
{
    return school;
}

void Student::print() const
{
    Person::print();
    cout << " goes to " << school;
}
