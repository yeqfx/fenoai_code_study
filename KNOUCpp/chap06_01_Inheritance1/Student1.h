#pragma once
#include "Person1.h"
class Student :
    public Person
{
private:
    std::string school;
public:
    void setSchool(std::string s);
    std::string getSchool() const;
    void print() const;
};

