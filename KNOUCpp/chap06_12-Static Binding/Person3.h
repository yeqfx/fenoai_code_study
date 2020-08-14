#pragma once

class Person {
    std::string name;
public:
    Person(const std::string& n)
    {
        //std::cout << "Person�� ������" << std::endl;
        name = n;
    }
    ~Person()
    {
        //std::cout << "Person�� �Ҹ���" << std::endl;
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
