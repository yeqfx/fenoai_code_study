#pragma once
//#include <iostream>

class Person {
    std::string name;
public:
    Person(const std::string& n)
    {
        std::cout << "Person의 생성자" << std::endl;
        name = n;
    }
    ~Person()
    {
        std::cout << "Person의 소멸자" << std::endl;
    }
    const std::string getName() const
    {
        return name;
    }
    void print() const
    {
        std::cout << name;
    }
};
