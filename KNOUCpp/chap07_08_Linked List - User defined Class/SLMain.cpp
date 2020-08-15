#include <iostream>
#include "List.h"
#include "MyString.h"
using namespace std;

int main()
{
    List <MyString> strList;
    strList.addFront("amazing?");
    strList.addFront("Isn't this");

    if (!strList.chkEmpty())
    {
        strList.moveFront();
        do {
            cout << strList.getValue() << " ";
        } while (strList.moveNext());
    }
    cout << endl;
    return 0;
}