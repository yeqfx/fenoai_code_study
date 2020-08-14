#pragma once
#include <string>
#include <iostream>

class Student
{
private:
    std::string school;
public:
    Student(const std::string& s) : school(s) {}
    void printSchool() const { std::cout << school << std::endl; }
};
