#include <iostream>
#include "Timer.h"
using namespace std;

void Timer::elapsed()
{
    std::chrono::time_point<clock_t> end_time = clock_t::now();

    cout << std::chrono::duration_cast<second_t>(end_time - start_time).count() << endl;
}

