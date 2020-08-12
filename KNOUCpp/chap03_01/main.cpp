#include <iostream>
#include "ConvFtoC.h"
using namespace std;

int main()
{
    float fTemp, cTemp;

    cout << "È­¾¾¿Âµµ : ";
    cin >> fTemp;
    cTemp = FahrToC(fTemp);
    cout << "----> ¼·¾¾¿Âµµ : " << cTemp << endl;

    return 0;
}

