#pragma once
#include <string>

class Person
{
private:
    std::string name;
public:
    void setName(std::string n);
    const std::string getName() const;
    void print() const;
};

