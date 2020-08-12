#include <iostream>
#include "TimeCalc.h"

using namespace std;

int main()
{
    TimeRec tRec1 = { 2, 30 };
    TimeRec tRec2 = { 1, 45 };

    cout << tRec1.hours << "시간 " << tRec1.minutes << "분 + ";
    cout << tRec2.hours << "시간 " << tRec2.minutes << "분 = ";

    AddTime(tRec1, tRec2);
    cout << tRec1.hours << "시간 " << tRec1.minutes << "분" << endl;;
    
    cout << tRec1.hours << "시간 " << tRec1.minutes << "분 + ";
    cout << "135분 = ";
    AddTime(tRec1, 135);
    cout << tRec1.hours << "시간 " << tRec1.minutes << "분" << endl;;

    return 0;
}