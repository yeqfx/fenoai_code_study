#include <iostream>
#include "PrintRec.h"
using namespace std;

void PrSalesRec(const SalesRec &srec)
{
    cout << "품목 코드 : " << srec.pID << endl;
    cout << "배달 일자 : " << srec.dYear << "년 ";
    cout << srec.dMonth << "월 ";
    cout << srec.dDate << "일" << endl;
    cout << "배달 주소 : " << srec.deliverAddr << endl;
}
