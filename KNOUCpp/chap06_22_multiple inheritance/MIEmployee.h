#pragma once
#include <iostream>
#include <string>

class Employee
{
private:
    std::string company;
public:
    Employee(const std::string& c) : company(c) {}
    void printCompany() const { std::cout << company << std::endl; }
};