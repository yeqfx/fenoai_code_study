#pragma once
//#include <iostream>
#include "Person3.h"

class Student : public Person
{
private:
    std::string school;
public:
    Student(const std::string& n, const std::string& s) : Person(n)
    {
        //std::cout << "Student�� ������" << std::endl;
        school = s;
    }
    ~Student()
    {
        //std::cout << "Student�� �Ҹ���" << std::endl;
    }
    const std::string getSchool() const
    {
        return school;
    }
    void print() const
    {
        Person::print();
        std::cout << " goes to " << school;
    }
};