#pragma once

#include "MIEmployee.h"
#include "MIStudent.h"

class Parttime : public Student, public Employee
{
public:
    Parttime(const std::string& s, const std::string& c)
        : Student(s), Employee(c) {}
};