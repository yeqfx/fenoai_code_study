#include <iostream>
#include "PrintRec.h"
using namespace std;

void PrSalesRec(const SalesRec &srec)
{
    cout << "ǰ�� �ڵ� : " << srec.pID << endl;
    cout << "��� ���� : " << srec.dYear << "�� ";
    cout << srec.dMonth << "�� ";
    cout << srec.dDate << "��" << endl;
    cout << "��� �ּ� : " << srec.deliverAddr << endl;
}
