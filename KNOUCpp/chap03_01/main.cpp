#include <iostream>
#include "ConvFtoC.h"
using namespace std;

int main()
{
    float fTemp, cTemp;

    cout << "ȭ���µ� : ";
    cin >> fTemp;
    cTemp = FahrToC(fTemp);
    cout << "----> �����µ� : " << cTemp << endl;

    return 0;
}

