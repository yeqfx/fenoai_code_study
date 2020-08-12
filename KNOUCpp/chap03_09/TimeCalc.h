#pragma once

struct TimeRec {
    int hours;
    int minutes;
};

void AddTime(TimeRec& t1, const TimeRec& t2);

void AddTime(TimeRec& t, int minutes);

