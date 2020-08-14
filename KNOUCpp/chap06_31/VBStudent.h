#pragma once
#include "VBPerson.h"
#include <string>
#include <iostream>

class Student : virtual public Person
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
