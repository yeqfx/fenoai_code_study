#include <iostream>
#include "List.h"
using namespace std;

int main()
{
    List<int> iList;
    for (int i = 10; i > 0; i--)
        iList.addFront(i);

    if (!iList.chkEmpty())
    {
        iList.moveFront();
        do {
            cout << iList.getValue() << " ";
        } while (iList.moveNext());
    }
    cout << endl;
    return 0;
}