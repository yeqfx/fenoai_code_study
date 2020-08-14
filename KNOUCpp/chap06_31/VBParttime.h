#pragma once
#include "VBEmployee.h"
#include "VBStudent.h"

class Parttime : public Student, public Employee
{
public:
    Parttime(const std::string &n, const std::string& s, const std::string& c)
        : Person(n), Student(n, s), Employee(n, c) {}
    void print() const
    {
        Student::print();
        Employee::print();
    }
};