#include <iostream>
#include "Pencils.h"
#include "SortFT.h"
using namespace std;

int main()
{
    Pencils pBoxes[5];
    pBoxes[0] = 45;
    pBoxes[1] = 8;
    pBoxes[2] = 21;
    pBoxes[3] = 35;
    pBoxes[4] = 18;

    sortFT(pBoxes, 5);

    for (int i = 0; i < 5; i++)
        cout << pBoxes[i] << endl;
    return 0;
    
}