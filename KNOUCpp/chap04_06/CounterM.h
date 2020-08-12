#pragma once
class CounterM
{
private:
    const int maxValue;
    int value;
    int a;

public:
    CounterM(int mVal, int a);
    void reset();
    void count();
    int getValue() const;
    int getMaxValue() const;
};

