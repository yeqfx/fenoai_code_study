#pragma once
#include "CBEmployee.h"
#include "CBStudent.h"

class Parttime : public Student, public Employee
{
public:
    Parttime(const std::string &n, const std::string& s, const std::string& c)
        : Student(n, s), Employee(n, c) {}
};