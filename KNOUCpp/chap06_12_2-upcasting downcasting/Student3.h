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
        //std::cout << "Student의 생성자" << std::endl;
        school = s;
    }
    ~Student()
    {
        //std::cout << "Student의 소멸자" << std::endl;
    }
    const std::string getSchool() const
    {
        return school;
    }
    void print() const override
    {
        Person::print();
        std::cout << " goes to " << school;
    }
};