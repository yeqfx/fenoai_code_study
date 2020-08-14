#pragma once
#include "CBPerson.h"
#include <iostream>
#include <string>

class Employee : public Person
{
private:
    std::string company;
public:
    Employee(const std::string &n, const std::string& c)
        : Person(n), company(c) {}
    void print() const {
        Person::print();
        std::cout << " is employed by " << company << std::endl; 
    }
};