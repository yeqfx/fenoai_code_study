#pragma once
#include <string>
#include <iostream>

class Person
{
    std::string name;
public:
    Person(const std::string& n) : name(n) {}
    void print() const { std::cout << name; }
};