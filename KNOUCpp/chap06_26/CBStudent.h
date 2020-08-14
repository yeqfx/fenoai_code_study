#pragma once
#include "CBPerson.h"
#include <string>
#include <iostream>

class Student : public Person
{
private:
    std::string school;
public:
    Student(const std::string &n, const std::string& s) 
        : Person(n), school(s) {}
    void print() const 
    { 
        Person::print();
        std::cout << " goes to " << school << std::endl; 
    }
};
