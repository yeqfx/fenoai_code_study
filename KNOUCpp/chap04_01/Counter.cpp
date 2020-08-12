#include "Counter.h"

void Counter::reset()
{
    value = 0;
}

void Counter::count()
{
    ++value;
}

int Counter::getValue() const
{
    return value;
}
