#include "CounterM.h"


CounterM::CounterM(int mVal, int a) : maxValue{ mVal + 1 }, value{ 0 }
{
}

void CounterM::reset()
{
    value = 0;
}

void CounterM::count()
{
    value = (value + 1) % maxValue;
}

int CounterM::getValue() const
{
    return value;
}

int CounterM::getMaxValue() const
{
    return maxValue;
}
