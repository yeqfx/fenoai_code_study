#include "calc.h"
#include "print.h"

int main()
{
    CALC_DATA data1;
    data1.operand1 = 10;
    data1.operand2 = 20;

    add(&data1);
    print(&data1);

    CALC_DATA data2;
    data1.operand1 = 40;
    data1.operand2 = 15;

    sub(&data1);
    print(&data1);

    return 0;
}