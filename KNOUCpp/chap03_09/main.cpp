#include <iostream>
#include "TimeCalc.h"

using namespace std;

int main()
{
    TimeRec tRec1 = { 2, 30 };
    TimeRec tRec2 = { 1, 45 };

    cout << tRec1.hours << "�ð� " << tRec1.minutes << "�� + ";
    cout << tRec2.hours << "�ð� " << tRec2.minutes << "�� = ";

    AddTime(tRec1, tRec2);
    cout << tRec1.hours << "�ð� " << tRec1.minutes << "��" << endl;;
    
    cout << tRec1.hours << "�ð� " << tRec1.minutes << "�� + ";
    cout << "135�� = ";
    AddTime(tRec1, 135);
    cout << tRec1.hours << "�ð� " << tRec1.minutes << "��" << endl;;

    return 0;
}