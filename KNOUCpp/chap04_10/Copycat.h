#pragma once
class Copycat
{
private:
    char* name;
public:
    Copycat(const char* n);
    Copycat(const Copycat& cc);
    ~Copycat();
    void whoRU() const;
};

