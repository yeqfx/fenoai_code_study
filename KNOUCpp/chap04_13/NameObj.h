#pragma once

class NamedObj
{
private:
    char* name;
    int id;
    static int nConstr;
    static int nDestr;
public:
    NamedObj(const char* s);
    ~NamedObj();
    void display() const;
    static int nObj();
};