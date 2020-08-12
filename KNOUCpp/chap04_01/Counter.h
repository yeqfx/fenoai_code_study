#pragma once
class Counter
{
private:
    int value;

public:
    void reset();
    void count();
    int getValue() const;    
};

