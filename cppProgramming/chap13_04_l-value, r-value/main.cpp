#include <iostream>
using namespace std;

void main()
{
    int i = 3;
    //(float)i = 5;   // r-value
    (float&)i = 5;  // l-value
    cout << (float&)i << endl;
}